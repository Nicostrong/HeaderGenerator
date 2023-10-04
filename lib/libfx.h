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
/*  Updated : 21/07/2023 16:29:12                                                                       */
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
#include "libhelp.h"

/*
 * <summary>
 *  Fonctions de fx_functions.c
 * </summary>
 *
 * <remarks>
 *  fonctions de traitement et de calcul
 * </remarks>
 *
 */

    void    ft_putchar              (char c);

    void    ft_putstr               (char *str);

    void    ft_strcpy               (char *dest, char *scr);

    void    ft_copyargs             (char **argv, int argc, ...);

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

/*
 * <summary>
 *  Fonctions de fx_banniere.c
 * </summary>
 *
 * <remarks>
 *  fonctions de conception de la banniere
 * </remarks>
 *
 */

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

/*
 * <summary>
 *  Fonctions de fx_frame.c
 * </summary>
 *
 * <remarks>
 *  fonctions de conception du cadre autour de la banniere
 * </remarks>
 *
 */

    void    aff_frame               (char **ban, int len_ban);

    void    ft_putstartline         (char start, char middle, char end, int len_frame);

    void    ft_putmiddleline        (char start, char **ban, char end, int len_frame, int len_ban, int ligne);

   // void    frame                   (char **ban, int length, int height);


/*
 * <summary>
 *  Fonctions de fx_test.c
 * </summary>
 *
 * <remarks>
 *  fonctions de tests et de validations
 * </remarks>
 *
 */

    #define SUCCESS             0
    #define ERROR_ALLOC_MEM     -1
    #define ERROR_CHAR_LABEL    -2
    #define ERROR_NB_ARG        -3
    #define ERROR_ARG_2         -4
    #define ERROR_LEN_BAN       -5
    #define ERROR_HELP          -6

    void    test_memorie            (void *var, char *var_name, int *error);

    void    test_label              (char *label, int *error);

    void    test_arg                (int argc, char **argv, int *error);

    void    test_len_ban            (int *len_header, int *error);

    void    free_memorie            (int count, ...);

/*
 * <summary>
 *  Fonctions de fx_caplong.c
 * </summary>
 *
 * <remarks>
 *  fonctions pour prolonger cartains caracteres en majuscule
 * </remarks>
 *
 */

    bool    find_arobase            (char letter, int line, int len_header, char **ban, char *charleft, char *charright, int *pos_arobase);

    void    prolonge_arobase        (int line, int pos_arobase, char charleft, char charrigh, int len_header, char **ban);

#endif

