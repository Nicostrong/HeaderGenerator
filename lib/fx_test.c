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
/*  File: fx_test.c                                                                                     */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 09/05/2023 09:53:08                                                                       */
/*  Updated : 10/05/2023 09:29:04                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

void    test_memorie    (void *var, char *var_name, int *error)
{
        if(!var)
        {
            printf("ERROR : ERROR_ALLOC_MEM\n");
            printf("Erreur d'allocution de la memoire pour la variable %s", var_name);
            free(var);
            *error  =    ERROR_ALLOC_MEM;
        }
}

void    test_label      (char *label, int *error)
{
        for(int i = 0; label[i] != '\0'; i++)
        {
            if(!(((label[i] >= 'a') && (label[i] <= 'z')) ||
                 ((label[i] >= 'A') && (label[i] <= 'Z')) ||
                 ((label[i] >= '0') && (label[i] <= '9')) ||
                 (label[i] == ' ')))
            {
                printf("ERROR : ERROR_CHAR_LABEL\n");
                printf("Caractère non pris en charge dans le label => %c\n", label[i]);
                *error  =   ERROR_CHAR_LABEL;
            }
        }
}

void    test_arg        (int argc, char **argv, int *error)
{
        if(argc < 4)
        {
            printf("ERROR : ERROR_NB_ARG\n");
            printf("Usage : %s <label> || \"la bel\" <style = '-c' for ASCII Art or '-a' for Alphabetic> <filename>\n", argv[0]);
            *error  =   ERROR_NB_ARG;
        }
        else if(!ft_strcmp(argv[2],"-c") && !ft_strcmp(argv[2], "-a"))
        {
            printf("ERROR : ERROR_ARG_2\n");
            printf      ("Usage for param 2 <style> : write '-c' for ASCII Art or '-a' for Alphabetic\n");
            *error  =   ERROR_ARG_2;
        }
}

void    test_len_ban    (int *len_header, int *error)
{
        if(*len_header > LEN_MAX_HEADER)
        {
            printf("ERROR : ERROR_LEN_BAN\n");
            printf("La banniere est limite a 120 caracteres\n");
            *error  =   ERROR_LEN_BAN;
        }
}

