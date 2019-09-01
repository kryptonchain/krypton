// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019, The KryptonChain Developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

const std::initializer_list<CheckpointData> CHECKPOINTS = {
    {0, "af13598cf94b00dab610f0a023d6ed4652dfb4199371b5688e616c1572706085"},
    {1, "46d8ab1a8d80e8b59bb03a4d4fd9eabdc29039a8d45461ce7030acbe3484842f"},
    {2, "b22983e59bfb12184bc3c6fbff9bd32a0813a26a6e4f5bbc104fa72251fd3e66"},
    {3, "89339be7b08d8d6ff48c9ae2b6835872bbcf03756e4f06d0ec7fb3e0cebd76da"},
    {100, "f496bfb1ce63c4e43b9ca394abc546581d742923767cbd5e6893dcb048043cee"},
    {5000, "9749428b4e61395167af46130ec88d0d839c82e165fb84574b5f168cdc6367ef"}
};

}
