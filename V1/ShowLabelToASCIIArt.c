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
/*  Updated : 01/05/2023 16:38:18                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "lib/functions.h"
#include "lib/libmin.h"
#include "lib/libmaj.h"
#include "lib/libch.h"

int     main        (int    argc, char  **argv)
{
        char    *label              =   malloc(sizeof(char) *   50);
        char    *filename           =   malloc(sizeof(char) *   50);
        int     *len_header         =   malloc(sizeof(int));
        int     len_label;

        test_memorie    ((void  *)  label, "label");
        test_memorie    ((void  *)  filename, "filename");
        test_memorie    ((void  *)  len_header, "longueur header");

        if(argc < 3)
        {
            printf      ("Usage : %s <label> <filename>\n", argv[0]);
            return (1);
        }
        if(argv[1])
        {
            ft_strcpy   (label, argv[1]);
        }
        if(argv[2])
        {   
            ft_strcpy   (filename, argv[2]);
        }

        len_label   =   cal_len_line    (label);
        cal_len_ban     (label, len_label, len_header);

        char    **ban          =   malloc(sizeof(char *) * 12);
        
        test_memorie    ((void  *)  ban, "banniere");
        
        for(int i = 0; i < 12; i++)
        {
            ban[i] =   malloc(sizeof(char) *   *len_header);
            test_memorie    ((void  *)  ban[i], "banniere ligne");
        }

        creat_ban(label, &ban[0], len_label, len_header);

        printf      ("Label: %s\n", label);

        for(int i = 0; i < len_label; i++)
        {
            printf  ("caractere %d : %c\n", i,label[i]);
        }

        printf      ("Nombre de caractere: %d\n", len_label);
        printf      ("Nombre de caractere du header: %d\n", *len_header);
        printf      ("Filename: %s\n", filename);
        printf      ("Voiçi la bannière :\n");

        show_ban    (&ban[0]);

        free    (label);
        free    (filename);
        free    (len_header);

        for(int i = 0; i < 12; i++)
           free (ban[i]);
    
        free    (ban);

        return (0);
}

