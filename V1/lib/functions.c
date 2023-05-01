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
/*  Updated : 01/05/2023 21:01:44                                                                       */
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
        *len_header  =   1;

        for(int  j = 0; j < len_label; j++)
        {
            if(label[j] == 32)
            {
                *len_header +=  2;
            }
            else if((label[j] >= 65) && (label[j] <= 90))
            {
                int x   =   label[j] - 65;
                *len_header +=  ((Majuscule_C *) majuscules_C[x])->caractere;
            }
            else if((label[j] >= 97) && (label[j] <= 122))
            {
                int x   =   label[j] - 97;
                *len_header +=  ((Minuscule_C *) minuscules_C[x])->caractere;
            }
            else if((label[j] >= 48) && (label[j] <= 57))
            {
                int x   =   label[j] - 48;
                *len_header +=  ((Chiffre_C *) chiffres_C[x])->caractere;
            }
            else
            {
                printf("Erreur de caractere dans le label\n");
            }
        }
}

void    banniere                    (char **ban, int *len_header)
{
        int cursor = 0;
        int p   =   18;

        for(int i = 0; i < 12; i++)
        {
            while((cursor + 1) != (*len_header))
            {
                char *y     =   ((Majuscule_C *) majuscules_C[p])->rows[i][0];
                int z       =   ((Majuscule_C *) majuscules_C[p])->caractere;

                for(int a = 0; a < z; a++)
                {
                    add_char(ban, i, cursor, y[a]);
                    cursor++;
                }
                /*
                add_char(ban, i , cursor, 'F');
                cursor++;
                */
            }
            add_char(ban, i, *len_header, '\0');
            cursor = 0;
        }
}
void    creat_ban                   (char *label, char **ban, int len_label, int *len_header)
{
        int     cursor;
        int     i;
        int     j;

        cursor = 0;

        for(i = 0; i < 12; i++)
        {
            for(j = 0; j < len_label; j++)
            {
                int     a;
                int     x;
                int     z;
                char    *y  =   NULL;
                
                z       =   0;

                if(label[j] == ' ')
                {
                    add_char(ban, i, cursor, ' ');
                    cursor++;
                    add_char(ban, i, cursor, ' ');
                    cursor++;
                }
                else
                {
                    if(label[j] >= 'A' && label[j] <= 'Z')
                    {
                        x   =   label[j] - 'A';
                        y   =   ((Majuscule_C *) majuscules_C[x])->rows[i][0];
                        z   =   ((Majuscule_C *) majuscules_C[x])->caractere;

                        for(a = 0; a < z; a++)
                        {
                            add_char(ban, i, cursor, y[a]);
                            cursor++;
                        }
                    }
                    else if(label[j] >= 'a' && label[j] <= 'z')
                    {
                        x   =   label[j] - 'a';
                        y   =   ((Minuscule_C *) minuscules_C[x])->rows[i][0];
                        z   =   ((Minuscule_C *) minuscules_C[x])->caractere;

                        for(a = 0; a < z; a++)
                        {
                            add_char(ban, i, cursor, y[a]);
                            cursor++;
                        }
                    }
                    else if(label[j] >= '0' && label[j] <= '9')
                    {
                        x   =   label[j] - '0';
                        y   =   ((Chiffre_C *) chiffres_C[x])->rows[i][0];
                        z   =   ((Chiffre_C *) chiffres_C[x])->caractere;

                        for(a = 0; a < z; a++)
                        {
                            add_char(ban, i, cursor, y[a]);
                            cursor++;
                        }
                    }
                    else
                    {
                        printf("Erreur de caractere dans le label non pris en charge");
                    }
                }
                if (cursor == *len_header)
                {
                    add_char(ban, i, *len_header, '\0');
                    cursor  =   0;
                }
            }
        }
}

void    show_ban                    (char  **ban)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", ban[i]);
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

