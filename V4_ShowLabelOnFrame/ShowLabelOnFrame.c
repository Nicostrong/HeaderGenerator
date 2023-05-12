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
/*  File: ShowLabelOnFrame.c                                                                            */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 12/05/2023 16:09:02                                                                       */
/*  Updated : 12/05/2023 16:10:01                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "../lib/libfx.h"
#include "../lib/libmin.h"
#include "../lib/libmaj.h"
#include "../lib/libch.h"

int     main        (int    argc, char  **argv)
{
        char    *label              =   malloc(sizeof(char) *   50);
        char    *filename           =   malloc(sizeof(char) *   50);
        char    *style              =   malloc(sizeof(char));
        int     *len_header         =   malloc(sizeof(int));
        int     *error              =   malloc(sizeof(int));
        int     len_label;

        test_memorie    ((void  *)  label, "label", error);
        test_memorie    ((void  *)  filename, "filename", error);
        test_memorie    ((void  *)  style, "Style d'écriture", error);
        test_memorie    ((void  *)  len_header, "longueur header", error);

        // Traitement des arguments

        test_arg(argc, argv, error);
        if((*error == ERROR_NB_ARG) || (*error == ERROR_ARG_2))
        {
            free_memorie    (5,label, filename, style, len_header, error);
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
            free_memorie    (5,label, filename, style, len_header, error);
            return (1);
        }

        test_len_ban(len_header, error);
        if(*error == ERROR_LEN_BAN)
        {
            free_memorie    (5,label, filename, style, len_header, error);
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

        aff_ban     (ban, *len_header);
        aff_regle   (*len_header);

        for(int i = 0; i < 12; i++)
           free (ban[i]);
    
        free_memorie    (6,label, filename, style, len_header, error, ban);

        return (0);
}

