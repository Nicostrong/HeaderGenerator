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
/*  File: fx_banniere.c                                                                                 */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 05/05/2023 17:02:39                                                                       */
/*  Updated : 09/05/2023 15:37:03                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

const   int LEN_MAX_HEADER  =   120;

void    creat_ban   (char *label, char **ban, int *len_header, int len_label)
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
                    else if(label[j] == 'M')
                    {
                        x   =   label[j] - 'A';
                        y   =   ((Majuscule_C_m *) majuscules_C[x])->rows[i][0];
                        z   =   ((Majuscule_C_m *) majuscules_C[x])->caractere;
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
                    else if(label[j] == 'm')
                    {
                        x   =   label[j] - 'a';
                        y   =   ((Minuscule_C_m *) minuscules_C[x])->rows[i][0];
                        z   =   ((Minuscule_C_m *) minuscules_C[x])->caractere;
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

void    show_ban    (char **ban, int len_header)
{
        for(int i = 0; i < 12; i++)
        {
            for(int j = 0; j < len_header; j++)
            {
                printf("%c", ban[i][j]);
            }
            printf("\n");
        }
}

