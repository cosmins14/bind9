#!/bin/sh -e
#
# Copyright (C) 2014, 2016, 2017  Internet Systems Consortium, Inc. ("ISC")
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

SYSTEMTESTTOP=..
. $SYSTEMTESTTOP/conf.sh

$SHELL clean.sh

<<<<<<< HEAD
test -r $RANDFILE || $GENRANDOM 400 $RANDFILE
=======
test -r $RANDFILE || $GENRANDOM 800 $RANDFILE
>>>>>>> 1fe9f65dbb6a094dc43e1bedbc9062790d76e971

cd ns1 && $SHELL sign.sh

cd ../ns5 && cp -f trusted.conf.bad trusted.conf

