/*
 * KLEnvironment.h
 *
 * $Header: /cvs/kfm/KerberosFramework/KerberosLogin/Sources/KerberosLogin/Headers/KLEnvironment.h,v 1.6 2003/07/28 21:31:10 lxs Exp $
 *
 * Copyright 2003 Massachusetts Institute of Technology.
 * All Rights Reserved.
 *
 * Export of this software from the United States of America may
 * require a specific license from the United States Government.
 * It is the responsibility of any person or organization contemplating
 * export to obtain such a license before exporting.
 *
 * WITHIN THAT CONSTRAINT, permission to use, copy, modify, and
 * distribute this software and its documentation for any purpose and
 * without fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright notice and
 * this permission notice appear in supporting documentation, and that
 * the name of M.I.T. not be used in advertising or publicity pertaining
 * to distribution of the software without specific, written prior
 * permission.  Furthermore if you modify this software you must label
 * your software as modified software and not distribute it in such a
 * fashion that it might be confused with the original M.I.T. software.
 * M.I.T. makes no representations about the suitability of
 * this software for any purpose.  It is provided "as is" without express
 * or implied warranty.
 */

KLBoolean __KLRealmHasKerberos4Profile (const char *inRealm);
KLBoolean __KLRealmHasKerberos5Profile (const char *inRealm);

KLBoolean __KLRealmHasKerberos5 (const char *inRealmName);
KLBoolean __KLRealmHasKerberos4 (const char *inRealmName);

KLBoolean __KLPrincipalHasKerberos4Profile (KLPrincipal inPrincipal);
KLBoolean __KLPrincipalHasKerberos5Profile (KLPrincipal inPrincipal);

KLBoolean __KLPrincipalHasKerberos4 (KLPrincipal inPrincipal);
KLBoolean __KLPrincipalHasKerberos5 (KLPrincipal inPrincipal);

KLBoolean __KLPrincipalShouldUseKerberos524Protocol (KLPrincipal inPrincipal);

KLBoolean __KLPrincipalShouldUseKerberos5ChangePasswordProtocol (KLPrincipal inPrincipal);
KLBoolean __KLPrincipalShouldUseKerberos4ChangePasswordProtocol (KLPrincipal inPrincipal);

KLBoolean __KLIsKerberosLoginServer (void);
KLBoolean __KLIsKerberosApp (void);
