/* OpenVAS Manager
 * $Id$
 * Description: Headers for OpenVAS Manager: the OMP daemon.
 *
 * Authors:
 * Matthew Mundell <matt@mundell.ukfsn.org>
 *
 * Copyright:
 * Copyright (C) 2009 Intevation GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * or, at your option, any later version as published by the Free
 * Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef OPENVAS_MANAGER_OMPD_H
#define OPENVAS_MANAGER_OMPD_H

#include <gnutls/gnutls.h>

int
serve_omp (gnutls_session_t*, gnutls_session_t*,
           gnutls_certificate_credentials_t*,
           int, int*);

extern struct sockaddr_in server_address;

// FIX Temporarily, for omp.c SEND_TO_CLIENT.
extern char to_client[];
extern int to_client_start;
extern int to_client_end;

#endif
