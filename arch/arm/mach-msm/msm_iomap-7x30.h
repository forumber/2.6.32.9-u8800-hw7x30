/* arch/arm/mach-msm/include/mach/msm_iomap-7x30.h
 *
 * Copyright (C) 2007 Google, Inc.
 * Author: Brian Swetland <swetland@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *
 * The MSM peripherals are spread all over across 768MB of physical
 * space, which makes just having a simple IO_ADDRESS macro to slide
 * them into the right virtual location rough.  Instead, we will
 * provide a master phys->virt mapping for peripherals here.
 *
 */

#if defined(CONFIG_VMSPLIT_2G)
#include <mach/msm_iomap-7x30_2G2G.h>
#endif

#ifndef __ASM_ARCH_MSM_IOMAP_7X30_H
#define __ASM_ARCH_MSM_IOMAP_7X30_H

#define MSM_GPU_REG_PHYS      0xA3500000
#define MSM_GPU_REG_SIZE      0x00020000

#define MSM_GPU_2D_REG_PHYS   0xA3900000
#define MSM_GPU_2D_REG_SIZE   SZ_4K
