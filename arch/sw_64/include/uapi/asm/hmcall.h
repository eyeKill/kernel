/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _UAPI_ASM_SW64_HMCALL_H
#define _UAPI_ASM_SW64_HMCALL_H

/* hmcall may be used in user mode */

#define HMC_bpt			0x80
#define HMC_callsys		0x83
#define HMC_imb			0x86
#define HMC_rdunique		0x9E
#define HMC_wrunique		0x9F
#define HMC_gentrap		0xAA
#define HMC_wrperfmon		0xB0

#endif
