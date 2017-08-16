/*
 * Copyright (C) 1999-2002, 2004-2007, 2009-2011, 2014, 2016, 2017  Internet Systems Consortium, Inc. ("ISC")
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

/* $Id: events.h,v 1.61 2011/10/28 06:20:06 each Exp $ */

#ifndef DNS_EVENTS_H
#define DNS_EVENTS_H 1

#include <isc/eventclass.h>

/*! \file dns/events.h
 * \brief
 * Registry of DNS event numbers.
 */

#define DNS_EVENT_FETCHCONTROL			(ISC_EVENTCLASS_DNS + 0)
#define DNS_EVENT_FETCHDONE			(ISC_EVENTCLASS_DNS + 1)
#define DNS_EVENT_VIEWRESSHUTDOWN		(ISC_EVENTCLASS_DNS + 2)
#define DNS_EVENT_VIEWADBSHUTDOWN		(ISC_EVENTCLASS_DNS + 3)
#define DNS_EVENT_UPDATE			(ISC_EVENTCLASS_DNS + 4)
#define DNS_EVENT_UPDATEDONE			(ISC_EVENTCLASS_DNS + 5)
#define DNS_EVENT_DISPATCH			(ISC_EVENTCLASS_DNS + 6)
#define DNS_EVENT_TCPMSG			(ISC_EVENTCLASS_DNS + 7)
#define DNS_EVENT_ADBMOREADDRESSES		(ISC_EVENTCLASS_DNS + 8)
#define DNS_EVENT_ADBNOMOREADDRESSES		(ISC_EVENTCLASS_DNS + 9)
#define DNS_EVENT_ADBCANCELED			(ISC_EVENTCLASS_DNS + 10)
#define DNS_EVENT_ADBNAMEDELETED		(ISC_EVENTCLASS_DNS + 11)
#define DNS_EVENT_ADBSHUTDOWN			(ISC_EVENTCLASS_DNS + 12)
#define DNS_EVENT_ADBEXPIRED			(ISC_EVENTCLASS_DNS + 13)
#define DNS_EVENT_ADBCONTROL			(ISC_EVENTCLASS_DNS + 14)
#define DNS_EVENT_CACHECLEAN			(ISC_EVENTCLASS_DNS + 15)
#define DNS_EVENT_BYADDRDONE			(ISC_EVENTCLASS_DNS + 16)
#define DNS_EVENT_ZONECONTROL			(ISC_EVENTCLASS_DNS + 17)
#define DNS_EVENT_DBDESTROYED			(ISC_EVENTCLASS_DNS + 18)
#define DNS_EVENT_VALIDATORDONE			(ISC_EVENTCLASS_DNS + 19)
#define DNS_EVENT_REQUESTDONE			(ISC_EVENTCLASS_DNS + 20)
#define DNS_EVENT_VALIDATORSTART		(ISC_EVENTCLASS_DNS + 21)
#define DNS_EVENT_VIEWREQSHUTDOWN		(ISC_EVENTCLASS_DNS + 22)
#define DNS_EVENT_NOTIFYSENDTOADDR		(ISC_EVENTCLASS_DNS + 23)
#define DNS_EVENT_ZONE				(ISC_EVENTCLASS_DNS + 24)
#define DNS_EVENT_ZONESTARTXFRIN		(ISC_EVENTCLASS_DNS + 25)
#define DNS_EVENT_MASTERQUANTUM			(ISC_EVENTCLASS_DNS + 26)
#define DNS_EVENT_CACHEOVERMEM			(ISC_EVENTCLASS_DNS + 27)
#define DNS_EVENT_MASTERNEXTZONE		(ISC_EVENTCLASS_DNS + 28)
#define DNS_EVENT_IOREADY			(ISC_EVENTCLASS_DNS + 29)
#define DNS_EVENT_LOOKUPDONE			(ISC_EVENTCLASS_DNS + 30)
#define DNS_EVENT_RBTDEADNODES			(ISC_EVENTCLASS_DNS + 31)
#define DNS_EVENT_DISPATCHCONTROL		(ISC_EVENTCLASS_DNS + 32)
#define DNS_EVENT_REQUESTCONTROL		(ISC_EVENTCLASS_DNS + 33)
#define DNS_EVENT_DUMPQUANTUM			(ISC_EVENTCLASS_DNS + 34)
#define DNS_EVENT_IMPORTRECVDONE		(ISC_EVENTCLASS_DNS + 35)
#define DNS_EVENT_FREESTORAGE			(ISC_EVENTCLASS_DNS + 36)
#define DNS_EVENT_VIEWACACHESHUTDOWN		(ISC_EVENTCLASS_DNS + 37)
#define DNS_EVENT_ACACHECONTROL			(ISC_EVENTCLASS_DNS + 38)
#define DNS_EVENT_ACACHECLEAN			(ISC_EVENTCLASS_DNS + 39)
#define DNS_EVENT_ACACHEOVERMEM			(ISC_EVENTCLASS_DNS + 40)
#define DNS_EVENT_RBTPRUNE			(ISC_EVENTCLASS_DNS + 41)
#define DNS_EVENT_MANAGEKEYS			(ISC_EVENTCLASS_DNS + 42)
#define DNS_EVENT_CLIENTRESDONE			(ISC_EVENTCLASS_DNS + 43)
#define DNS_EVENT_CLIENTREQDONE			(ISC_EVENTCLASS_DNS + 44)
#define DNS_EVENT_ADBGROWENTRIES		(ISC_EVENTCLASS_DNS + 45)
#define DNS_EVENT_ADBGROWNAMES			(ISC_EVENTCLASS_DNS + 46)
#define DNS_EVENT_ZONESECURESERIAL		(ISC_EVENTCLASS_DNS + 47)
#define DNS_EVENT_ZONESECUREDB			(ISC_EVENTCLASS_DNS + 48)
#define DNS_EVENT_ZONELOAD			(ISC_EVENTCLASS_DNS + 49)
#define DNS_EVENT_KEYDONE			(ISC_EVENTCLASS_DNS + 50)
#define DNS_EVENT_SETNSEC3PARAM			(ISC_EVENTCLASS_DNS + 51)
#define DNS_EVENT_SETSERIAL			(ISC_EVENTCLASS_DNS + 52)
#define DNS_EVENT_CATZUPDATED			(ISC_EVENTCLASS_DNS + 53)
#define DNS_EVENT_CATZADDZONE			(ISC_EVENTCLASS_DNS + 54)
#define DNS_EVENT_CATZMODZONE			(ISC_EVENTCLASS_DNS + 55)
#define DNS_EVENT_CATZDELZONE			(ISC_EVENTCLASS_DNS + 56)
<<<<<<< HEAD
=======
#define DNS_EVENT_RPZUPDATED			(ISC_EVENTCLASS_DNS + 57)
>>>>>>> 1fe9f65dbb6a094dc43e1bedbc9062790d76e971
#define DNS_EVENT_STARTUPDATE			(ISC_EVENTCLASS_DNS + 58)

#define DNS_EVENT_FIRSTEVENT			(ISC_EVENTCLASS_DNS + 0)
#define DNS_EVENT_LASTEVENT			(ISC_EVENTCLASS_DNS + 65535)

#endif /* DNS_EVENTS_H */
