/*
 * Copyright (C) 2022 - OpenSIPS Solutions
 *
 * This file is part of opensips, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * opensips is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */



#ifndef _PROTO_MSRP_MSRP_HANDLER_H_
#define _PROTO_MSRP_MSRP_HANDLER_H_

#include "../../ip_addr.h"
#include "msrp_parser.h"

typedef int (*msrp_req_handler_f) ( struct msrp_msg *req , void *param);

int register_req_handler( str *host_filter, int port_filter,
		int secure_filter, msrp_req_handler_f f, void *param);

int handle_msrp_msg(char* buf, int len, struct msrp_firstline *fl, str *body,
		struct receive_info *local_rcv);


#endif
