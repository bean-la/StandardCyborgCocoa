/*
 Copyright 2020 Standard Cyborg
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */


#pragma once

#include <optional>

#include "standard_cyborg/util/Result.hpp"

//#include "standard_cyborg/io/pbio/VideoPBIO.hpp"

#include "standard_cyborg/proto/sc3d/video.pb.h"


namespace standard_cyborg {
namespace io {
namespace pbio {

extern Result<::standard_cyborg::proto::sc3d::Video> ToVideoPBFromBytes(const std::string& fileExtension, std::string &&jpeg_bytes);


} // namespace pbio
} // namespace io
} // namespace standard_cyborg
