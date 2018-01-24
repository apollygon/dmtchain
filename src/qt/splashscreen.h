// Copyright (c) 2009 - 2010 Satoshi Nakamoto
// Copyright (c) 2009 - 2013 The Bitcoin Developers
// Copyright (c) 2018 DMTchain Developers
// Copyright (c) 2018 Decentralized Earth
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QSplashScreen>

/** class for the splashscreen with information of the running client
 */
class SplashScreen : public QSplashScreen
{
    Q_OBJECT

public:
    explicit SplashScreen(const QPixmap &pixmap = QPixmap(), Qt::WindowFlags f = 0);
};

#endif // SPLASHSCREEN_H
