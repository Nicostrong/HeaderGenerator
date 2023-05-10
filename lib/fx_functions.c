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
/*  Updated : 10/05/2023 10:38:30                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

void    ft_putchar      (char c)
{
        write           (1, &c, sizeof(char));
}

void    ft_putstr       (char *str)
{
        int i;

        i = 0;

        while(str[i] != '\0')
        {
            ft_putchar(str[i]);
            i++;
        }
}

void    ft_strcpy       (char *dest, char *src)
{
        int i;

        i = 0;

        while(src[i] != '\0')
        {
            dest[i]     =   src[i];
            i++;
        }
}

bool    ft_strcmp       (char *str1, char *str2)
{
        int i;

        i = 0;

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

void    aff_label       (char *label, int len_label)
{
        printf          ("Label: %s\n", label);

        for(int i = 0; i < len_label; i++)
        {
            printf      ("caractere %d : %c\n", i,label[i]);
        }
}

void    aff_nb_char     (int len_label)
{
        printf          ("Nombre de caractere: %d\n", len_label);
}

void    aff_len_ban     (int len_ban)
{
        printf          ("Nombre de caractere du header: %d\n", len_ban);
}

void    aff_style       (char *style)
{
        printf          ("Style choisis: %s\n", style);
}

void    aff_outfile     (char *filename)
{
        printf          ("Filename: %s\n", filename);
}

void    aff_ban         (char **ban, int len_header)
{
        printf          ("Voiçi la bannière :\n");
        show_ban        (&ban[0], len_header);
}
        
void    aff_regle       (int len_header)
{
        for(int i = 0; i < len_header; i++)
            printf      ("%d", i%10);

        printf          ("\n");
}

int     cal_len_line    (char *label)
{
        char *p = label; 
        int nombre;

        nombre = 0;

        while(*p)
        {
            p++;
            nombre++;
        }

        return (nombre);
}

int     cal_len_ban     (char *label, int len_label)
{
        int len_header;

        len_header = 0;

        for(int j = 0; j < len_label; j++)
        {
            if(label[j] == ' ')
            {
                len_header +=  3;
            }
            else if((label[j] >= 'A') && (label[j] <= 'Z'))
            {
                int x = label[j] - 'A';
                len_header += (((Majuscule_C *) majuscules_C[x])->caractere) + 1;
            }
            else if((label[j] >= 'a') && (label[j] <= 'z'))
            {
                int x = label[j] - 'a';
                len_header += (((Minuscule_C *) minuscules_C[x])->caractere) + 1;
            }
            else if((label[j] >= '0') && (label[j] <= '9'))
            {
                int x = label[j] - '0';
                len_header += (((Chiffre_C *) chiffres_C[x])->caractere) + 1;
            }
            else
            {
                printf  ("Erreur de caractere dans le label\n");
            }
        }

        return (len_header);
}

