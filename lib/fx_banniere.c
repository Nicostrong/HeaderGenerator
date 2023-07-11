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
/*  Updated : 11/07/2023 16:10:25                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

/*
 * <summary>
 *  const   int LEN_MAX_HEADER 
 * </summary>
 *
 * <remarks>
 *  Constante de la longueur maximal du label 
 * </remarks>
 *
 * <param type="int" name="LEN_MAX_HEADER">nombre de caractere pour former le label</param>
 *
 */

 const   int LEN_MAX_HEADER  =   135;

/*
 * <summary>
 *  char    *copy_char_maj_C
 * </summary>
 *
 * <remarks>
 *  Cette fonction copie l'adresse du tableau de la structure de la lettre majuscule en ASCII Art
 * </remarks>
 *
 * <param type="char" name="lettre">caractere</param>
 * <param type="int" name="position">position dans le tableau récapitulatif</param>
 * <param type="int" name="ligne">ligne du tableau a copier</param>
 *
 * <return type="char *">adresse du premier caractere de la ligne</return>
 *
 */

char    *copy_char_maj_C    (char lettre, int position, int ligne)
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

/*
 * <summary>
 *  char    *copy_char_maj_A
 * </summary>
 *
 * <remarks>
 *  Cette fonction copie l'adresse du tableau de la structure de la lettre majuscule en Alpha
 * </remarks>
 *
 * <param type="char" name="lettre">caractere</param>
 * <param type="int" name="position">position dans le tableau récapitulatif</param>
 * <param type="int" name="ligne">ligne du tableau a copier</param>
 *
 * <return type="char *">adresse du premier caractere de la ligne</return>
 *
 */

char    *copy_char_maj_A    (char lettre, int position, int ligne)
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

/*
 * <summary>
 *  int     copy_nb_char_maj
 * </summary>
 *
 * <remarks>
 *  Cette fonction nous donne le nombre de caractere constituant une ligne de la structure
 * </remarks>
 *
 * <param type="char" name="lettre">caractere</param>
 * <param type="int" name="position">position dans le tableau récapitulatif</param>
 *
 * <return type="int">nombre de caractere constituant une ligne</return>
 *
 */

int     copy_nb_char_maj    (char lettre, int position)
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

/*
 * <summary>
 *  char    *copy_char_min_C
 * </summary>
 *
 * <remarks>
 *  Cette fonction copie l'adresse du tableau de la structure de la lettre minuscule en ASCI Art
 * </remarks>
 *
 * <param type="char" name="lettre">caractere</param>
 * <param type="int" name="position">position dans le tableau récapitulatif</param>
 * <param type="int" name="ligne">ligne du tableau a copier</param>
 *
 * <return type="char *">adresse du premier caractere de la ligne</return>
 *
 */

char    *copy_char_min_C    (char lettre, int position, int ligne)
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

/*
 * <summary>
 *  char    *copy_char_min_A
 * </summary>
 *
 * <remarks>
 *  Cette fonction copie l'adresse du tableau de la structure de la lettre minuscule en Alpha
 * </remarks>
 *
 * <param type="char" name="lettre">caractere</param>
 * <param type="int" name="position">position dans le tableau récapitulatif</param>
 * <param type="int" name="ligne">ligne du tableau a copier</param>
 *
 * <return type="char *">adresse du premier caractere de la ligne</return>
 *
 */

char    *copy_char_min_A    (char lettre, int position, int ligne)
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

/*
 * <summary>
 *  int     copy_nb_char_min
 * </summary>
 *
 * <remarks>
 *  Cette fonction nous donne le nombre de caractere constituant une ligne de la structure
 * </remarks>
 *
 * <param type="char" name="lettre">caractere</param>
 * <param type="int" name="position">position dans le tableau récapitulatif</param>
 *
 * <return type="int">nombre de caractere constituant une ligne</return>
 *
 */

int     copy_nb_char_min    (char lettre, int position)
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

/*
 * <summary>
 *  void    recup_ascii_maj
 * </summary>
 *
 * <remarks>
 *  Cette fonction :
 *      copie l'adresse du premier caractere de la structure de la lettre.
 *      enregistre la longueur de la chaine de caractere de la structure
 * </remarks>
 *
 * <param type="char *" name="style">style de caractere</param>
 * <param type="char **" name="char_lettre">caractere composant la lettre</param>
 * <param type="int *" name="nb_char_lettre">nombre de caractere composant la ligne</param>
 * <param type="char" name="lettre">caractere rechercher</param>
 * <param type="int" name="ligne">ligne du tableau a copier</param>
 *
 * <subfunction>
 *  copy_char_maj_C
 *  copy_nb_char_maj
 *  copy_cgar_maj_A
 *  copy_nb_char_maj
 * </subfunction>
 *
 */

void    recup_ascii_maj (char *style, char **char_lettre, int *nb_char_lettre, char lettre, int ligne)
{
        int position;

        position            =   lettre - 'A';

        if(style[1] == 'c')
        {
            *char_lettre     =   copy_char_maj_C     (lettre, position, ligne);
            *nb_char_lettre =   copy_nb_char_maj    (lettre, position);
        }
        else
        {
            *char_lettre     =   copy_char_maj_A     (lettre, position, ligne);
            *nb_char_lettre =   copy_nb_char_maj    (lettre, position);
        }
}


/*
 * <summary>
 *  void    recup_ascii_min
 * </summary>
 *
 * <remarks>
 *  Cette fonction :
 *      copie l'adresse du premier caractere de la structure de la lettre.
 *      enregistre la longueur de la chaine de caractere de la structure
 * </remarks>
 *
 * <param type="char *" name="style">style de caractere</param>
 * <param type="char **" name="char_lettre">caractere composant la lettre</param>
 * <param type="int *" name="nb_char_lettre">nombre de caractere composant la ligne</param>
 * <param type="char" name="lettre">caractere rechercher</param>
 * <param type="int" name="ligne">ligne du tableau a copier</param>
 *
 * <subfunction>
 *  copy_char_min_C
 *  copy_nb_char_min
 *  copy_char_min_A
 *  copy_nb_char_min
 * </subfunction>
 *
 */

void    recup_ascii_min (char *style, char **char_lettre, int *nb_char_lettre, char lettre, int ligne)
{
        int position;

        position            =   lettre - 'a';
        
        if(style[1] == 'c')
        {
            *char_lettre     =   copy_char_min_C     (lettre, position, ligne);
            *nb_char_lettre =   copy_nb_char_min    (lettre, position);
        }
        else
        {
            *char_lettre     =   copy_char_min_A     (lettre, position, ligne);
            *nb_char_lettre =   copy_nb_char_min    (lettre, position);
        }
}

/*
 * <summary>
 *  void    recup_ascii_ch
 * </summary>
 *
 * <remarks>
 *  Cette fonction :
 *      copie l'adresse du premier caractere de la structure d'un chiffre
 *      enregistre la longueur de la chaine de caractere de la structure
 * </remarks>
 *
 * <param type="char *" name="style">style de caractere</param>
 * <param type="char **" name="char_lettre">caractere composant le chiffre</param>
 * <param type="int *" name="nb_char_lettre">nombre de caractere composant la ligne</param>
 * <param type="char" name="lettre">caractere numerique rechercher</param>
 * <param type="int" name="ligne">ligne du tableau a copier</param>
 *
 */

void    recup_ascii_ch  (char *style, char **char_lettre, int *nb_char_lettre, char lettre, int ligne)
{
        int position;

        position            =   lettre - '0';

        if(style[1] == 'c')
        {
            *char_lettre     =   ((Chiffre_C *) chiffres_C[position])->rows[ligne][0];
            *nb_char_lettre =   ((Chiffre_C *) chiffres_C[position])->caractere;
        }
        else
        {
            *char_lettre     =   ((Chiffre_N *) chiffres_N[position])->rows[ligne][0];
            *nb_char_lettre =   ((Chiffre_N *) chiffres_N[position])->caractere;
        }
}

/*
 * <summary>
 *  void   format_line_ban 
 * </summary>
 *
 * <remarks>
 *  Cette fonction construitune ligne de la banniere
 * </remarks>
 *
 * <param type="char **" name="ban">tableau de caractere formant la banniere</param>
 * <param type="char *" name="char_lettre">adresse de la ligne d'une structure</param>
 * <param type="int *" name="nb_char_lettre">nombre de caractere composant la ligne</param>
 * <param type="int *" name="cursor">numero du caractere dans la banniere</param>
 * <param type="int" name="ligne">ligne de la banniere</param>
 * <param type="int" name="len_header">longueur total de la banniere</param>
 *
 * <subfunction>
 *  add_char_ban
 * </subfunction>
 *
 */

void    format_line_ban (char **ban, char *char_lettre, int *nb_char_lettre, int *cursor, int ligne, int len_header)
{
        for(int num_ascii_insert = 0; num_ascii_insert < *nb_char_lettre; num_ascii_insert++)
        {
            add_char_ban    (ban, ligne, *cursor, char_lettre[num_ascii_insert]);
            (*cursor)++;
        }

        add_char_ban        (ban, ligne, *cursor, ' ');
        (*cursor)++;

        if (*cursor == len_header)
        {
            add_char_ban    (ban, ligne, len_header, '\0');
            *cursor  =   0;
        }
}

/*
 * <summary>
 *  void   creat_ban 
 * </summary>
 *
 * <remarks>
 *  Cette fonction construit la banniere
 * </remarks>
 *
 * <param type="char *" name="label">mot a transcrire dans la banniere</param>
 * <param type="char **" name="ban">tableau de caractere formant la banniere</param>
 * <param type="char *" name="style">style choisis</param>
 * <param type="int" name="len_label">nombre de caractere constituant le label</param>
 * <param type="int *" name="error">numero d'erreur en cas d'erreur</param>
 *
 * <subfunction>
 *  malloc
 *  test_memorie
 *  cal_len_header
 *  recup_ascii_maj
 *  recup_ascii_min
 *  recup_ascii_ch
 *  format_line_ban
 * </subfunction>
 *
 */

void    creat_ban   (char *label, char **ban, char *style, int len_label, int *error)
{
        int     *cursor             =   malloc(sizeof(int));
        int     ligne;
        int     char_label;
        int     len_header;

        test_memorie    ((void *) cursor, "cursor", error);    
        len_header  =   cal_len_ban(label, len_label);
        *cursor     =   0;

        for(ligne = 0; ligne < 12; ligne++)
        {
            int     *nb_char_lettre =   malloc(sizeof(int));
            char    *char_lettre    =   malloc(sizeof(char) * 16);

            test_memorie    ((void *) nb_char_lettre, "nb char lettre", error);
            test_memorie    ((void *) char_lettre, "char lettre", error);

            for(char_label = 0; char_label < len_label; char_label++)
            {
                char    lettre  =   label[char_label];

                if(lettre >= 'A' && lettre <= 'Z')
                    recup_ascii_maj (style, &char_lettre, nb_char_lettre, lettre, ligne);
                else if(lettre >= 'a' && lettre <= 'z')
                    recup_ascii_min (style, &char_lettre, nb_char_lettre, lettre, ligne);
                else if(lettre >= '0' && lettre <= '9')
                    recup_ascii_ch  (style, &char_lettre, nb_char_lettre, lettre, ligne);
                else if(lettre == ' ')
                {
                    char_lettre         =   "  ";
                    *nb_char_lettre     =   2;
                }
                format_line_ban (ban, char_lettre, nb_char_lettre, cursor, ligne, len_header);
            }
        }
}

/*
 * <summary>
 *  void   add_char 
 * </summary>
 *
 * <remarks>
 *  Ajoute un caractere a une ligne et numero de caractere precis
 * </remarks>
 *
 * <param type="char **" name="ban">tableau de caractere formant la banniere</param>
 * <param type="int" name="ligne">numero de la ligne</param>
 * <param type="int" name="position">numero du caractere</param>
 * <param type="char" name="c">caractere a inserer</param>
 */

void    add_char_ban    (char **ban, int ligne, int position, char c)
{
        ban[ligne][position] = c;
}

/*
 * <summary>
 *  void  show_char 
 * </summary>
 *
 * <remarks>
 *  Affiche la banniere 
 * </remarks>
 *
 * <param type="char **" name="ban">tableau de caractere formant la banniere</param>
 * <param type="int" name="len_header">nombre de caractere constituant une ligne de la banniere</param>
 * 
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

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

