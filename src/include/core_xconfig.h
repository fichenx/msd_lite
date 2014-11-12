/*-
 * Copyright (c) 2013 Rozhuk Ivan <rozhuk.im@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * Author: Rozhuk Ivan <rozhuk.im@gmail.com>
 *
 */

 
#ifndef __CORE_XCONFIG_H__
#define __CORE_XCONFIG_H__


typedef struct xcfg_file_s *xcfg_file_p;


int	xcfg_file_open(const char *file, xcfg_file_p *pxcfd);
void	xcfg_file_close(xcfg_file_p xcfg);

size_t	xcfg_file_calc_val_count(xcfg_file_p xcfg, const uint8_t *tag1, ...);
int	xcfg_file_get_val_data(xcfg_file_p xcfg, uint8_t **next_pos,
	    uint8_t **ret_value, size_t *ret_value_size, const uint8_t *tag1, ...);
int	xcfg_file_get_val_ssize_t(xcfg_file_p xcfg, uint8_t **next_pos,
	    ssize_t *val_ret, const uint8_t *tag1, ...);
int	xcfg_file_get_val_int(xcfg_file_p xcfg, uint8_t **next_pos,
	    int32_t *val_ret, const uint8_t *tag1, ...);


#endif // __CORE_XCONFIG_H__