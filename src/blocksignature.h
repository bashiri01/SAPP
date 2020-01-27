// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2019 The SapphireCore developers
// Copyright (c) 2019 The Sapphire 2 developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SAP_BLOCKSIGNATURE_H
#define SAP_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //SAP_BLOCKSIGNATURE_H
