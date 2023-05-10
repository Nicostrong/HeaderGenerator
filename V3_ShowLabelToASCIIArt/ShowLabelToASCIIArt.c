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
<<<<<<< HEAD
/*  Updated : 08/05/2023 14:20:51                                                                       */
=======
/*  Updated : 10/05/2023 09:32:58                                                                       */
>>>>>>> fonction
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
        int     len_label;

        //test_memorie    ((void  *)  label, "label");
        //test_memorie    ((void  *)  filename, "filename");
        //test_memorie    ((void  *)  style, "Style d'écriture");
        //test_memorie    ((void  *)  len_header, "longueur header");

        if(argc < 4)
        {
            printf      ("Usage : %s <label> || \"la bel\" <style = '-c' for ASCII Art or '-a' for Alphabetic> <filename>\n", argv[0]);
            return (1);
        }
        else if(!ft_strcmp(argv[2],"-c") && !ft_strcmp(argv[2], "-a"))
        {
            printf      ("Usage for param 2 <style> : write '-c' for ASCII Art or '-a' for Alphabetic");
            return (2);
        }
        else
        {
            ft_strcpy   (label, argv[1]);
            ft_strcpy   (style, argv[2]);
            ft_strcpy   (filename, argv[3]);
        }

        len_label   =   cal_len_line    (label);
        *len_header =   cal_len_ban     (label, len_label);

        if(*len_header >= LEN_MAX_HEADER)
        {
            printf("Label trop long\n");
            return (1);
        }

        char    **ban          =   malloc(sizeof(char *) * 12);
        
        //test_memorie    ((void  *)  ban, "banniere");
        
        for(int i = 0; i < 12; i++)
        {
            ban[i] =   malloc(sizeof(char) * (*len_header));
            //test_memorie    ((void  *)  ban[i], "banniere ligne");
        }
        printf      ("Label: %s\n", label);

        for(int i = 0; i < len_label; i++)
        {
            printf  ("caractere %d : %c\n", i,label[i]);
        }

        printf      ("Nombre de caractere: %d\n", len_label);
        printf      ("Nombre de caractere du header: %d\n", *len_header);
        printf      ("Style choisis: %s\n", style);
        printf      ("Filename: %s\n", filename);
        printf      ("Voiçi la bannière :\n");

        creat_ban   (label, &ban[0], len_header, len_label);

        show_ban    (&ban[0], len_header);

        for(int i = 0; i < *len_header; i++)
            printf("%d", i%10);

        free    (label);
        free    (filename);
        free    (len_header);

        for(int i = 0; i < 12; i++)
           free (ban[i]);
    
        free    (ban);

        return (0);
}

