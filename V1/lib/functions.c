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
/*  File: functions.c                                                                                   */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 15/04/2023 14:29:51                                                                       */
/*  Updated : 25/04/2023 16:29:55                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "functions.h"

void    ft_putchar              (char   c)
{
        write(1, &c, sizeof(char));
}

void    ft_putstr(char *str)
{
        int     i;

         i  =   0;

        while(str[i] != '\0')
        {
            ft_putchar(str[i]);
            i++;
        }
}

void    ft_strcpy              (char   *dest, char  *src)
{
        int     i;

        i   =   0;

        while(src[i] != '\0')
        {
            dest[i] =   src[i];
            i++;
        }
}

int     calcul_longueur_ligne   (char   *label)
{
        char    *p  =   label; 
        while(*p)
                p++;

        return (p - label);
}

void    calcul_longueur_header  (char   *label,int  longueur_label, int *length_header)
{
    for(int i = 0; i < longueur_label; i++)
    {
        if(label[i] == 32)
        {
            length_header += 2;
        }
        else if((label[i] - 65) >= 0 && (label[i] - 90) < 26)
        {
            int x;
            int y;

            x   =   label[i] - 65;
            y   =   majuscules_C[i].caractere;

            length_header += y;
        }
        else if((label[i] - 97) >= 0 && (label[i] - 122) < 26)
        {
            int x;
            int y;

            x   =   label[i] - 97;
            y   =   minuscules_C[i].caractere;

            length_header += y;
        }
        else
            printf("Erreur de caractere dans le label");
    }
}

