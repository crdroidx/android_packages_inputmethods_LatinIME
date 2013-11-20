/*
 * Copyright (C) 2013, The Android Open Source Project
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
 */

#ifndef LATINIME_VER4_PATRICIA_TRIE_WRITING_HELPER_H
#define LATINIME_VER4_PATRICIA_TRIE_WRITING_HELPER_H

#include "defines.h"

namespace latinime {

class HeaderPolicy;
class Ver4DictBuffers;

class Ver4PatriciaTrieWritingHelper {
 public:
    Ver4PatriciaTrieWritingHelper(Ver4DictBuffers *const buffers)
            : mBuffers(buffers) {}

    void writeToDictFile(const char *const trieFilePath, const HeaderPolicy *const headerPolicy,
            const int unigramCount, const int bigramCount) const;

 private:
    DISALLOW_IMPLICIT_CONSTRUCTORS(Ver4PatriciaTrieWritingHelper);

    Ver4DictBuffers *const mBuffers;
};
} // namespace latinime

#endif /* LATINIME_VER4_PATRICIA_TRIE_WRITING_HELPER_H */
