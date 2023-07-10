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
/*  File: LongCapChar.c                                                                                 */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 02/06/2023 11:20:58                                                                       */
/*  Updated : 10/07/2023 16:42:55                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */


#include "../lib/libfx.h"
#include "../lib/libmin.h"
#include "../lib/libmaj.h"
#include "../lib/libch.h"

/*
 * <summary>
 *  LongCapChar
 * </summary>
 *
 * <remarks>
 *  Prolongation du caractere post ou pre '@'
 * </remarks>
 *
 * <subfunction>
 *  malloc
 *  test_memorie
 *  test_arg
 *  free_memorie
 *  ft_strcpy
 *  cal_len_line
 *  cal_len_ban
 *  test_label
 *  test_len_ban
 *  aff_label
 *  aff_nb_char
 *  aff_len_ban
 *  aff_style
 *  aff_outfile
 *  creat_ban
 *  aff_ban
 *  aff_regle
 *  aff_frame
 * </subfunction>
 *
 */

int     main        (int    argc, char  **argv)
{
        char    *label              =   malloc(sizeof(char) *   50);
        char    *filename           =   malloc(sizeof(char) *   50);
        char    *style              =   malloc(sizeof(char));
        char    *charleft           =   malloc(sizeof(char));
        char    *charright          =   malloc(sizeof(char));
        int     *len_header         =   malloc(sizeof(int));
        int     *pos_arrobase       =   malloc(sizeof(int));
        int     *error              =   malloc(sizeof(int));
        int     len_label;

        test_memorie    ((void  *)  label, "label", error);
        test_memorie    ((void  *)  filename, "filename", error);
        test_memorie    ((void  *)  style, "Style d'écriture", error);
        test_memorie    ((void  *)  charleft, "Caractere a gauche de '@'", error);
        test_memorie    ((void  *)  charright, "Caractere a droite de '@'", error);
        test_memorie    ((void  *)  len_header, "longueur header", error);
        test_memorie    ((void  *)  pos_arrobase, "position de '@'", error);

        // Traitement des arguments

        test_arg(argc, argv, error);
        if((*error == ERROR_NB_ARG) || (*error == ERROR_ARG_2))
        {
            free_memorie    (8, label, filename, style, charleft, charright, len_header, pos_arrobase, error);
            return (1);
        }
        else
        {
            ft_strcpy   (label, argv[1]);
            ft_strcpy   (style, argv[2]);
            ft_strcpy   (filename, argv[3]);
        }

        len_label   =   cal_len_line    (label);
        *len_header =   cal_len_ban     (label, len_label);

        test_label(label, error);
        if(*error == ERROR_CHAR_LABEL)
        {
            free_memorie    (8, label, filename, style, charleft, charright, len_header, pos_arrobase, error);
            return (1);
        }

        test_len_ban(len_header, error);
        if(*error == ERROR_LEN_BAN)
        {
            free_memorie    (8, label, filename, style, charleft, charright, len_header, pos_arrobase, error);
            return (1);
        }

        char    **ban          =   malloc(sizeof(char *) * 12);
        
        test_memorie    ((void  *)  ban, "banniere", error);
        
        for(int i = 0; i < 12; i++)
        {
            ban[i] =   malloc(sizeof(char) * (*len_header));
            test_memorie    ((void  *)  ban[i], "banniere ligne", error);
        }

        aff_label   (label, len_label);
        aff_nb_char (len_label);
        aff_len_ban (*len_header);
        aff_style   (style);
        aff_outfile (filename);

        creat_ban   (label, &ban[0], style, len_label, error);

        if(find_arobase('@', 0, *len_header, ban, charleft, charright, pos_arrobase))
        {
            printf("Position de '@' sur la ligne 0 : %d\n", *pos_arrobase);
            printf("Caractere a gauche de '@': %c\n", *charleft);
            printf("Caractere a droite de '@': %c\n", *charright);
            printf("**************\n");
            prolonge_arobase(0, *pos_arrobase, *charleft, *charright, *len_header, ban);
        }
        if(find_arobase('@', 11, *len_header, ban, charleft, charright, pos_arrobase))
        {
            printf("Position de '@' sur la ligne 11 : %d\n", *pos_arrobase);
            printf("Caractere a gauche de '@': %c\n", *charleft);
            printf("Caractere a droite de '@': %c\n", *charright);
            printf("**************\n");
            prolonge_arobase(11, *pos_arrobase, *charleft, *charright, *len_header, ban);
        }

        aff_ban     (ban, *len_header);
        // aff_frame   (ban, *len_header);
       
        for(int i = 0; i < 12; i++)
           free (ban[i]);
    
        free_memorie    (9, label, filename, style, charleft, charright, len_header, pos_arrobase, error, ban);

        return (0);
}

