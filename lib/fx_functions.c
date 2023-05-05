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
/*  File: fx_functions.c                                                                                */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 05/05/2023 17:01:50                                                                       */
/*  Updated : 05/05/2023 17:02:12                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

const   int LEN_MAX_HEADER      =   120;

void    ft_putchar                  (char   c)
{
        write(1, &c, sizeof(char));
}

void    ft_putstr                   (char *str)
{
        int     i;

         i  =   0;

        while(str[i] != '\0')
        {
            ft_putchar(str[i]);
            i++;
        }
}

void    ft_strcpy                   (char   *dest, char  *src)
{
        int     i;

        i   =   0;

        while(src[i] != '\0')
        {
            dest[i] =   src[i];
            i++;
        }
}

bool    ft_strcmp                   (char   *str1, char *str2)
{
        int i = 0;
        while (str1[i] != '\0' || str2[i] != '\0')
        {
            if (str1[i] != str2[i])
            {
                return false;
            }
            i++;
        }
        return true;
}

int     cal_len_line                (char   *label)
{
        char    *p  =   label; 
        int     nombre;

        nombre      =   0;

        while(*p)
        {
                p++;
                nombre++;
        }

        return (nombre);
}

void    add_char                    (char **ban, int ligne, int position, char c)
{
        ban[ligne][position] = c;
}

void    cal_len_ban                 (char *label, int len_label, int *len_header)
{
        *len_header  =   0;

        for(int  j = 0; j < len_label; j++)
        {
            if(label[j] == ' ')
            {
                *len_header +=  3;
            }
            else if((label[j] >= 'A') && (label[j] <= 'Z'))
            {
                int x   =   label[j] - 'A';
                *len_header +=  (((Majuscule_C *) majuscules_C[x])->caractere) + 1;
            }
            else if((label[j] >= 'a') && (label[j] <= 'z'))
            {
                int x   =   label[j] - 'a';
                *len_header +=  (((Minuscule_C *) minuscules_C[x])->caractere) + 1;
            }
            else if((label[j] >= '0') && (label[j] <= '9'))
            {
                int x   =   label[j] - '0';
                *len_header +=  (((Chiffre_C *) chiffres_C[x])->caractere) + 1;
            }
            else
            {
                printf("Erreur de caractere dans le label\n");
            }
        }
}

void    test_memorie                (void   *var, char  *var_name)
{
        if(!var)
        {
            printf("Erreur d'allocution de la memoire pour la variable %s", var_name);
            free(var);
        }
        else
            printf("Allocation de mémoire pour la variable %s => OK\n", var_name);
}

