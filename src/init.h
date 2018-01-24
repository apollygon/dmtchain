
// Copyright (c) 2009 - 2010 Satoshi Nakamoto
// Copyright (c) 2009 - 2013 The Bitcoin Developers
// Copyright (c) 2018 DMTchain Developers
// Copyright (c) 2018 Decentralized Earth
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_INIT_H
#define BITCOIN_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;

void StartShutdown();
bool ShutdownRequested();
void Shutdown();
bool AppInit2(boost::thread_group& threadGroup);
std::string HelpMessage();

#endif
