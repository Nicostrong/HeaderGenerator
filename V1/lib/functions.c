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
/*  Updated : 26/04/2023 16:24:47                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "functions.h"

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

int     calcul_longueur_ligne       (char   *label)
{
        char    *p  =   label; 
        while(*p)
                p++;

        return (p - label);
}

void    calcul_longueur_header      (char   *label,int  longueur_label, int *length_header)
{
        for(int i = 0; i < longueur_label; i++)
        {
            if(label[i] == 32)
            {
                *length_header  +=  2;
            }
            else if((label[i] >= 65) && (label[i] <= 90))
            {
                int x;
                int y;

                x   =   label[i] - 65;
                y   =   ((Majuscule_C   *)  majuscules_C[x])->caractere;

                *length_header  +=  y;
            }
            else if((label[i] >= 97) && (label[i] <= 122))
            {
                int x;
                int y;

                x   =   label[i] - 97;
                y   =   ((Minuscule_C   *)  minuscules_C[x])->caractere;

                *length_header  +=  y;
            }
            else if((label[i] >= 48) && (label[i] <= 57))
            {
                int x;
                int y;

                x   =   label[i] - 48;
                y   =   ((Chiffre_C *)  chiffres_C[x])->caractere;

                *length_header  +=  y;
            }
            else
                printf("Erreur de caractere dans le label");
        }
}

void    creer_banniere              (char   *label, char    **banniere, int    longueur_label)
{
        for(int i = 0; i <= 12; i ++)
        {
            for(int j = 0; j < longueur_label; j++)
            {
                if(label[j] == 32)
                {
                    strcat(banniere[i], "  ");
                }
                else if((label[j] >= 65) && (label[j] <= 90))
                {
                    int     x;
                    char    **y;

                    x   =   label[j] - 65;
                    y   =   ((Majuscule_C   *)  majuscules_C[x])->rows[i];

                    strcat(banniere[i], y[i]);
                }
                else if((label[j] >= 97) && (label[j] <= 122))
                {
                    int     x;
                    char    **y;

                    x   =   label[j] - 97;
                    y   =   ((Minuscule_C   *)  minuscules_C[x])->rows[i];

                    strcat(banniere[i], y[i]);
                }
                else if((label[j] >= 48) && (label[j] <= 57))
                {
                    int     x;
                    char    **y;

                    x   =   label[j] - 48;
                    y   =   ((Chiffre_C *)  chiffres_C[x])->rows[i];

                    strcat(banniere[i], y[i]);
                }
                strcat(banniere[i], " ");
            }
        }
}

void    show_banniere               (char  **banniere)
{
        for(int i = 0; i <= 12; i++)
        {
            printf("%s/n", banniere[i]);
        }
}

void    test_allocation_memoire     (void   *variable)
{
        if(!    variable)
        {
            printf("Erreur d'allocution de la memoire pour la variable %s", (char   *)  variable);
            free(variable);
        }
}
