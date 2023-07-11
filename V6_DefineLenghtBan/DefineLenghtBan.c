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
/*  File: DefineLenghtBan.c                                                                             */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 11/07/2023 10:19:33                                                                       */
/*  Updated : 11/07/2023 14:46:08                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "../lib/libfx.h"
#include "../lib/libmin.h"
#include "../lib/libmaj.h"
#include "../lib/libch.h"

/*
 * <summary>
 *  DefineLenghtBan
 * </summary>
 *
 * <remarks>
 *  Definition d'une longueur de banniere 
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
 *  find_arobase
 *  prolonge_arobase
 *  aff_ban
 *  aff_regle
 *  aff_frame
 * </subfunction>
 *
 */

int     main        (int    argc, char  **argv)
{
        char    *label              =   malloc(sizeof(char) *   50);
        char    *style              =   malloc(sizeof(char));
        char    *def_len_ban        =   malloc(sizeof(int));
        char    *justify            =   malloc(sizeof(char) *   3);
        char    *filename           =   malloc(sizeof(char) *   50);
        char    *charleft           =   malloc(sizeof(char));
        char    *charright          =   malloc(sizeof(char));
        int     *len_header         =   malloc(sizeof(int));
        int     *pos_arrobase       =   malloc(sizeof(int));
        int     *error              =   malloc(sizeof(int));
        int     len_label;

        test_memorie    ((void  *)  label, "Label", error);
        test_memorie    ((void  *)  style, "Style d'écriture", error);
        test_memorie    ((void  *)  def_len_ban, "Longueur de la banniere", error);
        test_memorie    ((void  *)  justify, "Type de justification", error);
        test_memorie    ((void  *)  filename, "Filename", error);
        test_memorie    ((void  *)  charleft, "Caractere a gauche de '@'", error);
        test_memorie    ((void  *)  charright, "Caractere a droite de '@'", error);
        test_memorie    ((void  *)  len_header, "Longueur header", error);
        test_memorie    ((void  *)  pos_arrobase, "Position de '@'", error);
        test_memorie    ((void  *)  error, "Code erreur", error);

        // Traitement des arguments

        test_arg(argc, argv, error);
        if((*error == ERROR_HELP) || (*error == ERROR_NB_ARG) || (*error == ERROR_ARG_2))
        {
            free_memorie    (10, label, style, def_len_ban, justify, filename, charleft, charright, len_header, pos_arrobase, error);
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

        while(find_arobase('@', 0, *len_header, ban, charleft, charright, pos_arrobase))
        {
            printf("Position de '@' sur la ligne 0 : %d\n", *pos_arrobase);
            printf("Caractere a gauche de '@': %c\n", *charleft);
            printf("Caractere a droite de '@': %c\n", *charright);
            printf("**************\n");
            prolonge_arobase(0, *pos_arrobase, *charleft, *charright, *len_header, ban);
        }
        while(find_arobase('@', 11, *len_header, ban, charleft, charright, pos_arrobase))
        {
            printf("Position de '@' sur la ligne 11 : %d\n", *pos_arrobase);
            printf("Caractere a gauche de '@': %c\n", *charleft);
            printf("Caractere a droite de '@': %c\n", *charright);
            printf("**************\n");
            prolonge_arobase(11, *pos_arrobase, *charleft, *charright, *len_header, ban);
        }

        aff_ban     (ban, *len_header);
        aff_frame   (ban, *len_header);
       
        for(int i = 0; i < 12; i++)
           free (ban[i]);
    
        free_memorie    (9, label, filename, style, charleft, charright, len_header, pos_arrobase, error, ban);

        return (0);
}

