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
/*  Updated : 12/05/2023 10:54:19                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#ifndef __H_LIBFX_H__
# define __H_LIBFX_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include "libmin.h"
#include "libmaj.h"
#include "libch.h"

// fx_functions.c

void    ft_putchar              (char c);

void    ft_putstr               (char *str);

void    ft_strcpy               (char *dest, char *scr);

bool    ft_strcmp               (char *str1, char *str2);

void    aff_label               (char *label, int len_label);

void    aff_nb_char             (int len_label);

void    aff_len_ban             (int len_ban);

void    aff_style               (char *style);

void    aff_outfile             (char *filename);

void    aff_ban                 (char **ban, int len_header);

void    aff_regle               (int len_header);

int     cal_len_line            (char *label);

int     cal_len_ban             (char *label, int len_label);

// fx_banniere.c

extern  const   int LEN_MAX_HEADER;

char    *copy_char_maj_C        (char lettre, int position, int ligne);

char    *copy_char_maj_A        (char lettre, int position, int ligne);

int     copy_nb_char_maj        (char lettre, int position);

char    *copy_char_min_C        (char lettre, int position, int ligne);

char    *copy_char_min_A        (char lettre, int position, int ligne);

int     copy_nb_char_min        (char lettre, int position);
    
void    recup_ascii_maj         (char *style, char **char_lettre, int *nb_char_lettre, char lettre, int ligne);

void    recup_ascii_min         (char *style, char **char_lettre, int *nb_char_lettre, char lettre, int ligne);

void    recup_ascii_ch          (char *style, char **char_lettre, int *nb_char_lettre, char lettre, int ligne);

void    format_line_ban         (char **ban, char *char_lettre, int *nb_char_lettre, int *cursor, int ligne, int len_header);

void    creat_ban               (char *label, char **ban, char *style, int len_label, int *error);

void    add_char_ban            (char **ban, int line, int position, char c);

void    show_ban                (char **ban, int len_header);

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

void    free_memorie            (int count, ...);

#endif

