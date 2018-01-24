DMTchain integration/staging tree
================================

https://www.dmtchain.io

Copyright (c) 2009-2014 Bitcoin Developers
Copyright (c) 2018 DMTchain Developers

What is DMTchain?
----------------

DMTchain is using the scrypt algorithm.

BLOCK REWARDS

8.4 BILLION DMT TOTAL COINS EVER!

EACH BLOCK WILL PAYOUT 1,666 DMT PER BLOCK.
THE DESIRED BLOCK TIME IS 20 SECONDS AND THE DIFFICULTY RETARGETS EVERY MINUTE.
NETWORK CONFIRMATIONS ARE SET TO 5 TO ALLOW QUICK TRANSACTIONS.

WE’VE INTRODUCED THE ÜBER-BLOCK (ÜBLOCK). VASTLY LARGER THAN NORMAL BLOCK REWARDS!

THE BLOCK REWARD SCHEDULE IS AS FOLLOWS:

BLOCK 1 = 1,666 DMT STANDARD BLOCK REWARD BEFORE HALVING
BLOCK 2 = 1,200,000,000 DMT PREMINE FOR DEVELOPMENT TEAM AND LOTTO ACCOUNTS.
ÜBLOCK 5000 = 25,000 DMT
ÜBLOCK 10,000 = 25,000 DMT
ÜBLOCK 15,000 = 25,000 DMT
ÜBLOCK 20,000 = 25,000 DMT
ÜBLOCK 25,000 = 25,000 DMT
ÜBLOCK 30,000 = 25,000 DMT
ÜBLOCK 35,000 = 25,000 DMT
ÜBLOCK 40,000 = 25,000 DMT
ÜBLOCK 45,000 = 25,000 DMT
ÜBLOCK 50,000 = 25,000 DMT
ÜBLOCK 55,000 = 25,000 DMT
ÜBLOCK 60,000 = 25,000 DMT
ÜBLOCK 65,000 = 25,000 DMT
ÜBLOCK 70,000 = 25,000 DMT
ÜBLOCK 75,000 = 25,000 DMT
ÜBLOCK 80,000 = 25,000 DMT
ÜBLOCK 100,000 = 50,000 DMT
ÜBLOCK 150,000 = 50,000 DMT
ÜBLOCK 200,000 = 50,000 DMT
ÜBLOCK 250,000 = 50,000 DMT
ÜBLOCK 300,000 = 50,000 DMT
ÜBLOCK 420,000 = 10,000,000 DMT
ÜBLOCK 420,001 = 10,000,000 DMT
ÜBLOCK 840,000 = 50,000,000 DMT

TOTAL ÜBLOCK REWARDS AMOUNTING TO 70625000 DMT

LOTTO TICKETS TO BE SOLD THROUGHOUT THE YEAR AND THE WINNING NUMBER WILL RECEIVE THE PRIVATE KEYS TO THE ACCOUNT WITH 20,000,000 DMT ON NEW YEARS DAY EACH YEAR!

 

SHOULD KEEP THINGS INTERESTING!

For more information, as well as an immediately useable, binary version of
the DMTchain client sofware, see https://www.dmtchain.io

License
-------

DMTchain is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake DMTCHAIN_QT_TEST=1 -o Makefile.test dmtchain-qt.pro
    make -f Makefile.test
    ./dmtchain-qt_test

# dmtchain
