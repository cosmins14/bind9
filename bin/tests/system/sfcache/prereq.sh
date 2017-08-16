#!/bin/sh
#
# Copyright (C) 2014, 2016, 2017  Internet Systems Consortium, Inc. ("ISC")
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

SYSTEMTESTTOP=..
. $SYSTEMTESTTOP/conf.sh

<<<<<<< HEAD
$GENRANDOM 400 $RANDFILE

if $KEYGEN -q -a RSAMD5 -b 512 -n zone -r $RANDFILE foo > /dev/null 2>&1
=======
$GENRANDOM 800 $RANDFILE

if $KEYGEN -q -a RSAMD5 -b 1024 -n zone -r $RANDFILE foo > /dev/null 2>&1
>>>>>>> 1fe9f65dbb6a094dc43e1bedbc9062790d76e971
then
    rm -f Kfoo*
else
    echo "I:This test requires that --with-openssl was used." >&2
    exit 255
fi
