/*
 *
 * Copyright 2017 Asylo authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef ASYLO_IDENTITY_SGX_ATTRIBUTES_UTIL_H_
#define ASYLO_IDENTITY_SGX_ATTRIBUTES_UTIL_H_

#include "asylo/identity/sgx/attributes.pb.h"

namespace asylo {
namespace sgx {

// Computes bit-wise AND of two Attributes protos.
//
// The operator does not differentiate between unset fields and fields that have
// been set to default values.
Attributes operator&(const Attributes &left, const Attributes &right);

// Checks two Attributes protos for equality.
//
// The operator does not differentiate between unset fields and fields that have
// been set to default values.
bool operator==(const Attributes &left, const Attributes &right);

// Checks two Attributes protos for inequality.
//
// The operator does not differentiate between unset fields and fields that have
// been set to default values.
bool operator!=(const Attributes &left, const Attributes &right);

}  // namespace sgx
}  // namespace asylo

#endif  // ASYLO_IDENTITY_SGX_ATTRIBUTES_UTIL_H_
