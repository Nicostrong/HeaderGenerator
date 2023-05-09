/* **************************************************************************************************** */
/*                                                                                                      */
/*  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  */
/*                                                   :::                                                */
/*  :::      :::  :::  ::::::::  ::::::::  ::::::::  :::  :::::::    ::::::::  :::      :::  :::::::::  */
/*  :+:\\    :+:  :+:  :+:       :+:  :+:  :+:  :+:  :+:  :+:  :+:   :+:  :+:  :+:\\    :+:  :+:   :+:  */
/*  +:+ \\   +:+  +:+  +:+       +:+  +:+  +:+       +:+  +:+   +:+  +:+  +:+  +:+ \\   +:+  +:+   +:+  */
/*  +#+  \\  +#+  +:+  +:+       +:+  +:+  +:+:+:+:  +:+  +:+ +:+    +:+  +:+  +#+  \\  +#+  +#+   #+#  */
/*  +#+   \\ +#+  +#+  +#+       +#+  +#+       +#+  +#+  +#+#+#+    +#+  +#+  +#+   \\ +#+  +#+#+#+#+  */
/*  #+#    \\#+#  #+#  #+#       #+#  #+#  #+#  #+#  #+#  #+#  #+#   #+#  #+#  #+#    \\#+#        #+#  */
/*  ###      ###  ###  ########  ########  ########  ###  ###   ###  ########  ###      ###        ###  */
/*                                                                                                ###   */
/*  ################################################################################################    */
/*                                                                                                      */
/*  File: libfx.h                                                                                       */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 05/05/2023 16:12:25                                                                       */
/*  Updated : 09/05/2023 15:39:27                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#ifndef __H_LIBFX_H__
# define __H_LIBFX_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "libmin.h"
#include "libmaj.h"
#include "libch.h"

extern  const   int LEN_MAX_HEADER;

// fx_functions.c

void    ft_putchar              (char c);

void    ft_putstr               (char *str);

void    ft_strcpy               (char *dest, char *scr);

bool    ft_strcmp               (char *str1, char *str2);

int     cal_len_line            (char *label);

void    add_char                (char **ban, int line, int position, char c);

void    cal_len_ban             (char *label, int len_label, int *len_header);

void    test_memorie            (void *var, char *var_name);

// fx_banniere.c
        
void    creat_ban_c             (char *label, char **ban, int len_label, int *len_header);

void    creat_ban_a             (char *label, char **ban, int len_label, int *len_header);

void    show_ban                (char **ban, int len_header);

// fx_frame.c

void    ft_putline              (char start, char middle, char end, int longueur);

void    frame                   (int length, int height);

#endif

