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
/*  Updated : 03/05/2023 20:28:52                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "functions.h"

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

void    creat_ban                   (char *label, char **ban, int len_label, int *len_header)
{
        int     cursor;
        int     i;
        int     j;

        cursor  =   0;
        i       =   0;

        for(i = 0; i < 12; i++)
        {
            for(j = 0; j < len_label; j++)
            {
                int     a;
                int     x;
                int     z;
                char    *y  =   NULL;
                
                z       =   0;

                if(label[j] >= 'A' && label[j] <= 'Z')
                {
                    if(label[j] == 'I')
                    {
                        x   =   label[j] - 'A';
                        y   =   ((Majuscule_C_i *) majuscules_C[x])->rows[i][0];
                        z   =   ((Majuscule_C_i *) majuscules_C[x])->caractere;
                    }
                    else if(label[j] == 'M' || label[j] == 'N')
                    {
                        x   =   label[j] - 'A';
                        y   =   ((Majuscule_C_mn *) majuscules_C[x])->rows[i][0];
                        z   =   ((Majuscule_C_mn *) majuscules_C[x])->caractere;
                    }
                    else if(label[j] == 'W')
                    {
                        x   =   label[j] - 'A';
                        y   =   ((Majuscule_C_w *) majuscules_C[x])->rows[i][0];
                        z   =   ((Majuscule_C_w *) majuscules_C[x])->caractere;
                    }
                    else
                    {
                        x   =   label[j] - 'A';
                        y   =   ((Majuscule_C *) majuscules_C[x])->rows[i][0];
                        z   =   ((Majuscule_C *) majuscules_C[x])->caractere;
                    }
                }
                else if(label[j] >= 'a' && label[j] <= 'z')
                {
                    if(label[j] == 'i')
                    {
                        x   =   label[j] - 'a';
                        y   =   ((Minuscule_C_i *) minuscules_C[x])->rows[i][0];
                        z   =   ((Minuscule_C_i *) minuscules_C[x])->caractere;
                    }
                    else if(label[j] == 'm' || label[j] == 'n')
                    {
                        x   =   label[j] - 'a';
                        y   =   ((Minuscule_C_mn *) minuscules_C[x])->rows[i][0];
                        z   =   ((Minuscule_C_mn *) minuscules_C[x])->caractere;
                    }
                    else if(label[j] == 'w')
                    {
                        x   =   label[j] - 'a';
                        y   =   ((Minuscule_C_w *) minuscules_C[x])->rows[i][0];
                        z   =   ((Minuscule_C_w *) minuscules_C[x])->caractere;
                    }
                    else
                    {
                        x   =   label[j] - 'a';
                        y   =   ((Minuscule_C *) minuscules_C[x])->rows[i][0];
                        z   =   ((Minuscule_C *) minuscules_C[x])->caractere;
                    }
                }
                else if(label[j] >= '0' && label[j] <= '9')
                {
                    x   =   label[j] - '0';
                    y   =   ((Chiffre_C *) chiffres_C[x])->rows[i][0];
                    z   =   ((Chiffre_C *) chiffres_C[x])->caractere;
                }
                else if(label[j] == ' ')
                {
                    y   =   "  ";
                    z   =   2;
                }
                else
                {
                    printf("Erreur de caractere dans le label non pris en charge\n");
                }
                
                for(a = 0; a < z; a++)
                {
                    add_char(ban, i, cursor, y[a]);
                    cursor++;
                }

                add_char(ban, i, cursor, ' ');
                cursor++;

                if (cursor == *len_header)
                {
                    add_char(ban, i, *len_header, '\0');
                    cursor  =   0;
                    break;
                }
            }
        }
}

void    show_ban                    (char  **ban, int   *len_header)
{
        for(int i = 0; i < 12; i++)
        {
            for(int j = 0; j < *len_header; j++)
            {
                printf("%c", ban[i][j]);
            }
            printf("\n");
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

