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
<<<<<<< Updated upstream
/*  Updated : 05/05/2023 16:21:40                                                                       */
=======
/*  Updated : 09/05/2023 13:01:58                                                                       */
>>>>>>> Stashed changes
/*                                                                                                      */
/* **************************************************************************************************** */

#include "../lib/libfx.h"
#include "../lib/libmin.h"
#include "../lib/libmaj.h"
#include "../lib/libch.h"

int     main        (int    argc, char  **argv)
{
        char    *label      =   malloc(sizeof(char) *   50);
        char    *filename   =   malloc(sizeof(char) *   50);
        char    *style      =   malloc(sizeof(char));
        char    **ban       =   malloc(sizeof(char *) * 12);
        int     *error      =   malloc(sizeof(int));
        int     *len_header =   malloc(sizeof(int));
        int     len_label;

        *error               =   0;
        
        //test_memorie    ((void  *)  label, "label");
        //test_memorie    ((void  *)  filename, "filename");
        //test_memorie    ((void  *)  style, "Style d'écriture");
        //test_memorie    ((void  *)  len_header, "longueur header");
        //test_memorie    ((void  *)  ban, "banniere");

        test_arg(argc, argv, error);
        if(*error == 0)
        {
            ft_strcpy   (label, argv[1]);
            ft_strcpy   (style, argv[2]);
            ft_strcpy   (filename, argv[3]);
        }
        else
            return (0);

<<<<<<< Updated upstream
        len_label   =   cal_len_line    (label);
        cal_len_ban     (label, len_label, len_header);

        if(*len_header >= LEN_MAX_HEADER)
=======
        test_label(label, error);
        if(*error == 0)
>>>>>>> Stashed changes
        {
            len_label   =   cal_len_line    (label);
            *len_header =   cal_len_ban     (label, len_label);
        }
        else
            return (0);

        test_len_ban(len_header, error);
        if(*error != 0)
            return (0);

        for(int i = 0; i < 12; i++)
        {
            ban[i] =   malloc(sizeof(char) * (*len_header));
            //test_memorie    ((void  *)  ban[i], "banniere ligne");
        }


        if(ft_strcmp(style, "-c"))
        {
            creat_ban_c     (label, &ban[0], len_label, len_header);
        }
        else
        {
            creat_ban_a     (label, &ban[0], len_label, len_header);
        }

        aff_label   (label, len_label);
        aff_nb_char (len_label);
        aff_len_ban (*len_header);
        aff_style   (style);
        aff_outfile (filename);
        aff_ban     (&ban[0], *len_header);
        aff_regle   (*len_header);

        free    (label);
        free    (filename);
        free    (len_header);

        for(int i = 0; i < 12; i++)
           free (ban[i]);

        free    (ban);

        return (0);
}
