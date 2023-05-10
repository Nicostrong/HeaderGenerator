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
/*  Updated : 10/05/2023 16:24:25                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

const   int LEN_MAX_HEADER  =   120;

char    *fonction_maj_1(char lettre,int  position, int ligne)
{
        if(lettre == 'I')
            return (((Majuscule_C_i *) majuscules_C[position])->rows[ligne][0]);
        else if(lettre == 'M')
            return (((Majuscule_C_m *) majuscules_C[position])->rows[ligne][0]);
        else if(lettre == 'W')
            return (((Majuscule_C_w *) majuscules_C[position])->rows[ligne][0]);
        else
            return (((Majuscule_C *) majuscules_C[position])->rows[ligne][0]);
}

int     fonction_maj_2(char lettre,int  position)
{
        if(lettre == 'I')
            return (((Majuscule_C_i *) majuscules_C[position])->caractere);
        else if(lettre == 'M')
            return (((Majuscule_C_m *) majuscules_C[position])->caractere);
        else if(lettre == 'W')
            return (((Majuscule_C_w *) majuscules_C[position])->caractere);
        else
            return (((Majuscule_C *) majuscules_C[position])->caractere);
}

char    *fonction_maj_3(char lettre,int  position, int ligne)
{
        if(lettre == 'I')
            return (((Majuscule_A_i *) majuscules_A[position])->rows[ligne][0]);
        else if(lettre == 'M')
            return (((Majuscule_A_m *) majuscules_A[position])->rows[ligne][0]);
        else if(lettre == 'W')
            return (((Majuscule_A_w *) majuscules_A[position])->rows[ligne][0]);
        else
            return (((Majuscule_A *) majuscules_A[position])->rows[ligne][0]);
}

int     fonction_maj_4(char lettre,int  position)
{
        if(lettre == 'I')
            return (((Majuscule_A_i *) majuscules_A[position])->caractere);
        else if(lettre == 'M')
            return (((Majuscule_A_m *) majuscules_A[position])->caractere);
        else if(lettre == 'W')
            return (((Majuscule_A_w *) majuscules_A[position])->caractere);
        else
            return (((Majuscule_A *) majuscules_A[position])->caractere);
}

char    *fonction_min_1(char lettre,int  position, int ligne)
{
        if(lettre == 'i')
            return (((Minuscule_C_i *) minuscules_C[position])->rows[ligne][0]);
        else if(lettre == 'm')
            return (((Minuscule_C_m *) minuscules_C[position])->rows[ligne][0]);
        else if(lettre == 'w')
            return (((Minuscule_C_w *) minuscules_C[position])->rows[ligne][0]);
        else
            return (((Minuscule_C *) minuscules_C[position])->rows[ligne][0]);
}

int     fonction_min_2(char lettre,int  position)
{
        if(lettre == 'i')
            return (((Minuscule_C_i *) minuscules_C[position])->caractere);
        else if(lettre == 'm')
            return (((Minuscule_C_m *) minuscules_C[position])->caractere);
        else if(lettre == 'w')
            return (((Minuscule_C_w *) minuscules_C[position])->caractere);
        else
            return (((Minuscule_C *) minuscules_C[position])->caractere);
}

char    *fonction_min_3(char lettre,int  position, int ligne)
{
        if(lettre == 'i')
            return (((Minuscule_A_i *) minuscules_A[position])->rows[ligne][0]);
        else if(lettre == 'm')
            return (((Minuscule_A_m *) minuscules_A[position])->rows[ligne][0]);
        else if(lettre == 'w')
            return (((Minuscule_A_w *) minuscules_A[position])->rows[ligne][0]);
        else
            return (((Minuscule_A *) minuscules_A[position])->rows[ligne][0]);
}

int     fonction_min_4(char lettre,int  position)
{
        if(lettre == 'i')
            return (((Minuscule_A_i *) minuscules_A[position])->caractere);
        else if(lettre == 'm')
            return (((Minuscule_A_m *) minuscules_A[position])->caractere);
        else if(lettre == 'w')
            return (((Minuscule_A_w *) minuscules_A[position])->caractere);
        else
            return (((Minuscule_A *) minuscules_A[position])->caractere);
}

void    creat_ban   (char *label, char **ban, char *style, int *len_header, int len_label)
{
        int     cursor;
        int     ligne;
        int     char_label;

        cursor  =   0;

        for(ligne = 0; ligne < 12; ligne++)
        {
            int     position;
            int     *nb_char_lettre =   malloc(sizeof(int));
            char    *char_lettre    =   malloc(sizeof(char) * 16);
            char    lettre          =   label[char_label];

            for(char_label = 0; char_label < len_label; char_label++)
            {
                if(lettre >= 'A' && lettre <= 'Z')
                {
                    position        =   lettre - 'A';

                    if(style[1] == 'c')
                    {
                        char_lettre     =   fonction_maj_1(lettre, position, ligne);
                        *nb_char_lettre  =   fonction_maj_2(lettre, position);
                    }
                    else
                    {
                        char_lettre     =   fonction_maj_3(lettre, position, ligne);
                        *nb_char_lettre  =   fonction_maj_4(lettre, position);
                    }
                }
                else if(lettre >= 'a' && lettre <= 'z')
                {
                    position        =   lettre - 'a';
                    if(style[1] == 'c')
                    {
                        char_lettre     =   fonction_min_1(lettre, position, ligne);
                        *nb_char_lettre  =   fonction_min_2(lettre, position);
                    }
                    else
                    {
                        char_lettre     =   fonction_min_3(lettre, position, ligne);
                        *nb_char_lettre  =   fonction_min_4(lettre, position);
                    }
                }
                else if(lettre >= '0' && lettre <= '9')
                {
                    position        =   lettre - '0';
                    if(style[1] == 'c')
                    {
                        char_lettre     =   ((Chiffre_C *) chiffres_C[position])->rows[ligne][0];
                        *nb_char_lettre  =   ((Chiffre_C *) chiffres_C[position])->caractere;
                    }
                    else
                    {
                        char_lettre     =   ((Chiffre_N *) chiffres_N[position])->rows[ligne][0];
                        *nb_char_lettre  =   ((Chiffre_N *) chiffres_N[position])->caractere;
                    }
                }
                else if(lettre == ' ')
                {
                    char_lettre     =   "  ";
                    *nb_char_lettre  =   2;
                }
            }
            for(int num_char_insert = 0; num_char_insert < *nb_char_lettre; num_char_insert++)
            {
                add_char(ban, ligne, cursor, char_lettre[num_char_insert]);
                cursor++;
            }
            // on ajoute un espace entre chaque sectionn ASCII
            add_char(ban, ligne, cursor, ' ');
            cursor++;

            if (cursor == *len_header)
            {
                add_char(ban, ligne, *len_header, '\0');
                cursor  =   0;
                break;
            }
        }
    
}

void    add_char    (char **ban, int ligne, int position, char c)
{
        ban[ligne][position] = c;
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

void    creat_ban_copy  (char *label, char **ban, char *style, int *len_header, int len_label)
{
        int     cursor;
        int     ligne;
        int     char_label;

        cursor  =   0;

        for(ligne = 0; ligne < 12; ligne++)
        {
            for(char_label = 0; char_label < len_label; char_label++)
            {
                int     position;
                int     nb_char_lettre;
                char    *char_lettre  =   NULL;
                
                nb_char_lettre  =   0;

                if(style[1] == 'c')
                {
                    if(label[char_label] >= 'A' && label[char_label] <= 'Z')
                    {
                        if(label[char_label] == 'I')
                        {
                            position        =   label[char_label] - 'A';
                            char_lettre     =   ((Majuscule_C_i *) majuscules_C[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Majuscule_C_i *) majuscules_C[position])->caractere;
                        }
                        else if(label[char_label] == 'M')
                        {
                            position        =   label[char_label] - 'A';
                            char_lettre     =   ((Majuscule_C_m *) majuscules_C[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Majuscule_C_m *) majuscules_C[position])->caractere;
                        }
                        else if(label[char_label] == 'W')
                        {
                            position        =   label[char_label] - 'A';
                            char_lettre     =   ((Majuscule_C_w *) majuscules_C[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Majuscule_C_w *) majuscules_C[position])->caractere;
                        }
                        else
                        {
                            position        =   label[char_label] - 'A';
                            char_lettre     =   ((Majuscule_C *) majuscules_C[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Majuscule_C *) majuscules_C[position])->caractere;
                        }
                    }
                    else if(label[char_label] >= 'a' && label[char_label] <= 'z')
                    {
                        if(label[char_label] == 'i')
                        {
                            position        =   label[char_label] - 'a';
                            char_lettre     =   ((Minuscule_C_i *) minuscules_C[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Minuscule_C_i *) minuscules_C[position])->caractere;
                        }
                        else if(label[char_label] == 'm')
                        {
                            position        =   label[char_label] - 'a';
                            char_lettre     =   ((Minuscule_C_m *) minuscules_C[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Minuscule_C_m *) minuscules_C[position])->caractere;
                        }
                        else if(label[char_label] == 'w')
                        {
                            position        =   label[char_label] - 'a';
                            char_lettre     =   ((Minuscule_C_w *) minuscules_C[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Minuscule_C_w *) minuscules_C[position])->caractere;
                        }
                        else
                        {
                            position        =   label[char_label] - 'a';
                            char_lettre     =   ((Minuscule_C *) minuscules_C[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Minuscule_C *) minuscules_C[position])->caractere;
                        }
                    }
                    else if(label[char_label] >= '0' && label[char_label] <= '9')
                    {
                        position        =   label[char_label] - '0';
                        char_lettre     =   ((Chiffre_C *) chiffres_C[position])->rows[ligne][0];
                        nb_char_lettre  =   ((Chiffre_C *) chiffres_C[position])->caractere;
                    }
                    else if(label[char_label] == ' ')
                    {
                        char_lettre     =   "  ";
                        nb_char_lettre  =   2;
                    }
                    
                    // pour chaque lettre du label
                    // on insère les ASCII de la lettre
                    for(int num_char_insert = 0; num_char_insert < nb_char_lettre; num_char_insert++)
                    {
                        add_char(ban, ligne, cursor, char_lettre[num_char_insert]);
                        cursor++;
                    }
                    // on ajoute un espace entre chaque sectionn ASCII
                    add_char(ban, ligne, cursor, ' ');
                    cursor++;

                    if (cursor == *len_header)
                    {
                        add_char(ban, ligne, *len_header, '\0');
                        cursor  =   0;
                        break;
                    }
                }
                else
                {
                    if(label[char_label] >= 'A' && label[char_label] <= 'Z')
                    {
                        if(label[char_label] == 'I')
                        {
                            position        =   label[char_label] - 'A';
                            char_lettre     =   ((Majuscule_A_i *) majuscules_A[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Majuscule_A_i *) majuscules_A[position])->caractere;
                        }
                        else if(label[char_label] == 'M')
                        {
                            position        =   label[char_label] - 'A';
                            char_lettre     =   ((Majuscule_A_m *) majuscules_A[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Majuscule_A_m *) majuscules_A[position])->caractere;
                        }
                        else if(label[char_label] == 'W')
                        {
                            position        =   label[char_label] - 'A';
                            char_lettre     =   ((Majuscule_A_w *) majuscules_A[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Majuscule_A_w *) majuscules_A[position])->caractere;
                        }
                        else
                        {
                            position        =   label[char_label] - 'A';
                            char_lettre     =   ((Majuscule_A *) majuscules_A[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Majuscule_A *) majuscules_A[position])->caractere;
                        }
                    }
                    else if(label[char_label] >= 'a' && label[char_label] <= 'z')
                    {
                        if(label[char_label] == 'i')
                        {
                            position        =   label[char_label] - 'a';
                            char_lettre     =   ((Minuscule_A_i *) minuscules_A[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Minuscule_A_i *) minuscules_A[position])->caractere;
                        }
                        else if(label[char_label] == 'm')
                        {
                            position        =   label[char_label] - 'a';
                            char_lettre     =   ((Minuscule_A_m *) minuscules_A[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Minuscule_A_m *) minuscules_A[position])->caractere;
                        }
                        else if(label[char_label] == 'w')
                        {
                            position        =   label[char_label] - 'a';
                            char_lettre     =   ((Minuscule_A_w *) minuscules_A[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Minuscule_A_w *) minuscules_A[position])->caractere;
                        }
                        else
                        {
                            position        =   label[char_label] - 'a';
                            char_lettre     =   ((Minuscule_A *) minuscules_A[position])->rows[ligne][0];
                            nb_char_lettre  =   ((Minuscule_A *) minuscules_A[position])->caractere;
                        }
                    }
                    else if(label[char_label] >= '0' && label[char_label] <= '9')
                    {
                        position        =   label[char_label] - '0';
                        char_lettre     =   ((Chiffre_N *) chiffres_N[position])->rows[ligne][0];
                        nb_char_lettre  =   ((Chiffre_N *) chiffres_N[position])->caractere;
                    }
                    else if(label[char_label] == ' ')
                    {
                        char_lettre     =   "  ";
                        nb_char_lettre  =   2;
                    }
                    
                    // pour chaque lettre du label
                    // on insère les ASCII de la lettre
                    for(int num_char_insert = 0; num_char_insert < nb_char_lettre; num_char_insert++)
                    {
                        add_char(ban, ligne, cursor, char_lettre[num_char_insert]);
                        cursor++;
                    }
                    // on ajoute un espace entre chaque sectionn ASCII
                    add_char(ban, ligne, cursor, ' ');
                    cursor++;

                    if (cursor == *len_header)
                    {
                        add_char(ban, ligne, *len_header, '\0');
                        cursor  =   0;
                        break;
                    }
                }
            }
        }
}

