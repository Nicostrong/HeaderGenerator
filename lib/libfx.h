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
/*  Updated : 10/05/2023 09:31:12                                                                       */
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

extern  const   int LEN_MAX_HEADER;

void    ban_lettre_maj          (char lettre_label, char *chars, int *nb_char, int ligne);

void    ban_lettre_min          (char lettre_label, char *chars, int *nb_char, int ligne);

void    ban_chiffre             (char lettre_label, char *chars, int *nb_char, int ligne);

void    add_char_in_ban         (char **ban, int ligne, int cursor, char *chars, int nb_char);

void    creat_ban               (char *label, char **ban, int *len_header, int len_label);

void    show_ban                (char **ban, int len_header);

void    creat_ban_aorigin       (char *label, char **ban, int len_label, int *len_header);

// fx_frame.c

void    ft_putline              (char start, char middle, char end, int longueur);

void    frame                   (int length, int height);

// fx_test.c

#define SUCCESS             0
#define ERROR_ALLOC_MEM     -1
#define ERROR_CHAR_LABEL    -2
#define ERROR_NB_ARG        -3
#define ERROR_ARG_2         -4
#define ERROR_LEN_BAN       -5

void    test_memorie            (void *var, char *var_name, int *error);

void    test_label              (char *label, int *error);

void    test_arg                (int argc, char **argv, int *error);

void    test_len_ban            (int *len_header, int *error);

#endif

