/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:     src/devices/block/blkpce.h                                 *
 * Created:       2004-11-28 by Hampa Hug <hampa@hampa.ch>                   *
 * Last modified: 2005-01-01 by Hampa Hug <hampa@hampa.ch>                   *
 * Copyright:     (C) 2004-2005 Hampa Hug <hampa@hampa.ch>                   *
 *****************************************************************************/

/*****************************************************************************
 * This program is free software. You can redistribute it and / or modify it *
 * under the terms of the GNU General Public License version 2 as  published *
 * by the Free Software Foundation.                                          *
 *                                                                           *
 * This program is distributed in the hope  that  it  will  be  useful,  but *
 * WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
 * Public License for more details.                                          *
 *****************************************************************************/

/* $Id$ */


#ifndef PCE_DEVICES_BLOCK_BLKPCE_H
#define PCE_DEVICES_BLOCK_BLKPCE_H 1


#include <config.h>

#include <devices/block/block.h>

#include <stdio.h>
#include <stdint.h>


/*!***************************************************************************
 * @short The pce image file disk structure
 *****************************************************************************/
typedef struct {
  disk_t   dsk;

  FILE     *fp;

  uint32_t blk_ofs;
  uint32_t blk_cnt;
  uint32_t blk_size;

  uint32_t c;
  uint32_t h;
  uint32_t s;
} disk_pce_t;


disk_t *dsk_pce_open_fp (FILE *fp, int ro);
disk_t *dsk_pce_open (const char *fname, int ro);

int dsk_pce_create_fp (FILE *fp, uint32_t c, uint32_t h, uint32_t s);
int dsk_pce_create (const char *fname, uint32_t c, uint32_t h, uint32_t s);


#endif