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
/*  File: ShowLabelToASCIIArt.c                                                                         */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 25/04/2023 15:02:06                                                                       */
/*  Updated : 10/05/2023 10:34:45                                                                       */
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

        //test_memorie    ((void  *)  label, "label");
        //test_memorie    ((void  *)  filename, "filename");
        //test_memorie    ((void  *)  style, "Style d'écriture");
        //test_memorie    ((void  *)  len_header, "longueur header");

        test_arg(argc, argv, error);

        if((*error == ERROR_NB_ARG) || (*error == ERROR_ARG_2))
            return (1);
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
            return (1);

        test_len_ban(len_header, error);
        if(*error == ERROR_LEN_BAN)
            return (1);

        char    **ban          =   malloc(sizeof(char *) * 12);
        
        //test_memorie    ((void  *)  ban, "banniere");
        
        for(int i = 0; i < 12; i++)
        {
            ban[i] =   malloc(sizeof(char) * (*len_header));
            //test_memorie    ((void  *)  ban[i], "banniere ligne");
        }

        aff_label   (label, len_label);
        aff_nb_char (len_label);
        aff_len_ban (*len_header);
        aff_style   (style);
        aff_outfile (filename);

        creat_ban   (label, &ban[0], len_header, len_label);
        //show_ban    (&ban[0], *len_header);

        aff_ban     (ban, *len_header);
        aff_regle   (*len_header);

        free    (label);
        free    (filename);
        free    (len_header);

        for(int i = 0; i < 12; i++)
           free (ban[i]);
    
        free    (ban);

        return (0);
}

