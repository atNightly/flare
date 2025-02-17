// Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this
// file except in compliance with the License. You may obtain a copy of the
// License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

#include "flare/base/crypto/sha.h"

#include "thirdparty/openssl/sha.h"

#include "flare/base/crypto/detail/openssl_impl.h"

namespace flare {

FLARE_DETAIL_CRYPTO_DEFINE_HASH_AND_HMAC_IMPL_FOR(Sha1, SHA1, SHA, SHA, sha1)
FLARE_DETAIL_CRYPTO_DEFINE_HASH_AND_HMAC_IMPL_FOR(Sha224, SHA224, SHA256,
                                                  SHA224, sha224)
FLARE_DETAIL_CRYPTO_DEFINE_HASH_AND_HMAC_IMPL_FOR(Sha256, SHA256, SHA256,
                                                  SHA256, sha256)
FLARE_DETAIL_CRYPTO_DEFINE_HASH_AND_HMAC_IMPL_FOR(Sha384, SHA384, SHA512,
                                                  SHA384, sha384)
FLARE_DETAIL_CRYPTO_DEFINE_HASH_AND_HMAC_IMPL_FOR(Sha512, SHA512, SHA512,
                                                  SHA512, sha512)

}  // namespace flare
