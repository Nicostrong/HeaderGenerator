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
/*  Updated : 15/05/2023 16:00:49                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

/*
 * <summary>
 *  void    ft_putchar
 * </summary>
 *
 * <remarks>
 *  Affiche un caractere a l'ecran
 * </remarks>
 *
 * <param type="char" name="c">caractere a afficher</param>
 *
 * <subfunction>
 *  write
 * </subfunction>
 *
 */

void    ft_putchar      (char c)
{
        write           (1, &c, sizeof(char));
}

/*
 * <summary>
 *  void    ft_putstr
 * </summary>
 *
 * <remarks>
 *  Affiche une chaine de caractere a l'ecran
 * </remarks>
 *
 * <param type="char *" name="str">phrase a afficher</param>
 *
 * <subfunction>
 *  ft_putchar
 * </subfunction>
 *
 */

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

/*
 * <summary>
 *  void    ft_strcpy
 * </summary>
 *
 * <remarks>
 *  Copie une chaine de caractere
 * </remarks>
 *
 * <param type="char *" name="dest">adresse de destination</param>
 * <param type="char *" name="src">adresse source a copier</param>
 *
 */

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

/*
 * <summary>
 *  bool    ft_strcmp
 * </summary>
 *
 * <remarks>
 *  Compare deux string
 * </remarks>
 *
 * <param type="char *" name="str1">string 1</param>
 * <param type="char *" name="str2">string 2</param>
 *
 * <return>True ou False</return>
 *
 */

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

/*
 * <summary>
 *  void    aff_label
 * </summary>
 *
 * <remarks>
 *  Affiche le label
 * </remarks>
 *
 * <param type="char *" name="label">label</param>
 * <param type="int" name="len_label">nombre de caractere du label</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    aff_label       (char *label, int len_label)
{
        printf          ("Label: %s\n", label);

        for(int i = 0; i < len_label; i++)
        {
            printf      ("caractere %d : %c\n", i,label[i]);
        }
}

/*
 * <summary>
 *  void    aff_nb_char
 * </summary>
 *
 * <remarks>
 *  Affiche le nombre de caractere du label
 * </remarks>
 *
 * <param type="int" name="len_label">nombre de caractere du label</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    aff_nb_char     (int len_label)
{
        printf          ("Nombre de caractere: %d\n", len_label);
}



/*
 * <summary>
 *  void    aff_len_banr
 * </summary>
 *
 * <remarks>
 *  Affiche le nombre total de caractere de la banniere
 * </remarks>
 *
 * <param type="int" name="len_ban">nombre de caractere de la banniere</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    aff_len_ban     (int len_ban)
{
        printf          ("Nombre de caractere du header: %d\n", len_ban);
}


/*
 * <summary>
 *  void    aff_style
 * </summary>
 *
 * <remarks>
 *  Affiche le style choisis
 * </remarks>
 *
 * <param type="char *" name="style">style de caractere de la banniere</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    aff_style       (char *style)
{
        printf          ("Style choisis: %s\n", style);
}

/*
 * <summary>
 *  void    aff_outfile
 * </summary>
 *
 * <remarks>
 *  Affiche le nom du fichier qui sera cree et contenant le header
 * </remarks>
 *
 * <param type="char *" name="filename">nom du fichier de destination</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    aff_outfile     (char *filename)
{
        printf          ("Filename: %s\n", filename);
}

/*
 * <summary>
 *  void    aff_ban
 * </summary>
 *
 * <remarks>
 *  Affiche l'appercu de la banniere
 * </remarks>
 *
 * <param type="char *" name="style">style de caractere de la banniere</param>
 *
 * <subfunction>
 *  printf
 *  show_ban
 * </subfunction>
 *
 */

void    aff_ban         (char **ban, int len_header)
{
        printf          ("Voiçi la bannière :\n");
        show_ban        (&ban[0], len_header);
}
        
/*
 * <summary>
 *  void    aff_regle
 * </summary>
 *
 * <remarks>
 *  Affiche le nombre de caractere sous la banniere
 * </remarks>
 *
 * <param type="int" name="len_header">nombre total de caractere de la banniere</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    aff_regle       (int len_header)
{
        for(int i = 0; i < len_header; i++)
            printf      ("%d", i%10);

        printf          ("\n");
}

/*
 * <summary>
 *  int     cal_len_line
 * </summary>
 *
 * <remarks>
 *  Calcul le nombre de caractere du label
 * </remarks>
 *
 * <param type="char *" name="label">label</param>
 *
 * <return>nombre de catactere</return>
 *
 */

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

/*
 * <summary>
 *  int     cal_len_header
 * </summary>
 *
 * <remarks>
 *  Calcul le nombre de caractere de la banniere
 * </remarks>
 *
 * <param type="char *" name="label">label</param>
 * <param type="int" name="len_label">nombre de caractere du label</param>
 *
 * <return>nombre de catactere de la banniere</return>
 *
 */

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
        }

        return (len_header);
}

