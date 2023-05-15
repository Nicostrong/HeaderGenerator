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
/*  File: majuscule_fx.c                                                                                */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 24/04/2023 16:05:43                                                                       */
/*  Updated : 15/05/2023 10:44:31                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libmaj.h"


/*
 * <summary>
 *  afficher_maj_C
 * </summary>
 *
 * <remarks>
 *  Fonction generique qui appel une fonction pour afficher une lettre majuscule en caractere ASCII Art
 * </remarks>
 *
 * <param type="void *" name="numero_lettre_majuscule">
 *  pointeur vers le numero de la lettre
 * </param>
 *
 * <subfunction>
 *  afficher_majuscule_C_i
 *  afficher_majuscule_C_m
 *  afficher_majuscule_C_w
 *  afficher_majuscule_C
 * </subfunction>
 *
*/

void    afficher_maj_C          (void   *numero_lettre_majuscule)
{
        int i   =   *(int   *)  numero_lettre_majuscule;

        if(i == 8)
        
            afficher_majuscule_C_i((Majuscule_C_i   *)  majuscules_C[i]);
        
        else if(i == 12)
            
            afficher_majuscule_C_m((Majuscule_C_m  *)  majuscules_C[i]);
        
        else if(i == 22)
            
            afficher_majuscule_C_w((Majuscule_C_w   *)  majuscules_C[i]);
        
        else
            
            afficher_majuscule_C((Majuscule_C       *)  majuscules_C[i]);
}

/*
 * <summary>
 *  afficher_majuscule_C
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres ASCII d'une lettre majuscule
 * </remarks>
 *
 * <param type="Majuscule_C *" name="lettre_majuscule">
 *  pointeur vers la structure de la lettre
 * </param>
 *
 */

void    afficher_majuscule_C   ( Majuscule_C    *lettre_majuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_majuscule_C_i
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres ASCII de la lettre 'I'
 * </remarks>
 *
 * <param type="Majuscule_C_i *" name="lettre_majuscule">
 *  pointeur vers la structure de la lettre 'I'
 * </param>
 *
 */

void    afficher_majuscule_C_i  (Majuscule_C_i  *lettre_majuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_majuscule_C_m
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres ASCII de la lettre 'M'
 * </remarks>
 *
 * <param type="Majuscule_C_m *" name="lettre_majuscule">
 *  pointeur vers la structure de la lettre 'M'
 * </param>
 *
 */

void    afficher_majuscule_C_m  (Majuscule_C_m  *lettre_majuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_majuscule_C_w
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres ASCII de la lettre 'W'
 * </remarks>
 *
 * <param type="Majuscule_C_w *" name="lettre_majuscule">
 *  pointeur vers la structure de la lettre 'W'
 * </param>
 *
 */

void    afficher_majuscule_C_w  (Majuscule_C_w  *lettre_majuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_maj_A
 * </summary>
 *
 * <remarks>
 *  Fonction generique qui appel une fonction pour afficher une lettre majuscule en caractere Alphat
 * </remarks>
 *
 * <param type="void *" name="numero_lettre_majuscule">
 *  pointeur vers le numero de la lettre
 * </param>
 *
 * <subfunction>
 *  afficher_majuscule_A_i
 *  afficher_majuscule_A_m
 *  afficher_majuscule_A_w
 *  afficher_majuscule_A
 * </subfunction>
 *
*/

void    afficher_maj_A          (void   *numero_lettre_majuscule)
{
        int i   =   *(int   *)  numero_lettre_majuscule;

        if(i == 8)
        
            afficher_majuscule_A_i((Majuscule_A_i   *)  majuscules_A[i]);
        
        else if(i == 12)
            
            afficher_majuscule_A_m((Majuscule_A_m  *)  majuscules_A[i]);
        
        else if(i == 22)
            
            afficher_majuscule_A_w((Majuscule_A_w   *)  majuscules_A[i]);
        
        else
            
            afficher_majuscule_A((Majuscule_A       *)  majuscules_A[i]);
}

/*
 * <summary>
 *  afficher_majuscule_A
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres Alpha d'une lettre majuscule
 * </remarks>
 *
 * <param type="Majuscule_A *" name="lettre_majuscule">
 *  pointeur vers la structure de la lettre
 * </param>
 *
 */

void    afficher_majuscule_A    (Majuscule_A    *lettre_majuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_majuscule_A_i
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres Alpha de la lettre 'I'
 * </remarks>
 *
 * <param type="Majuscule_A_i *" name="lettre_majuscule">
 *  pointeur vers la structure de la lettre 'I'
 * </param>
 *
 */

void    afficher_majuscule_A_i  (Majuscule_A_i  *lettre_majuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_majuscule_A_m
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres Alpha de la lettre 'M'
 * </remarks>
 *
 * <param type="Majuscule_A_m *" name="lettre_majuscule">
 *  pointeur vers la structure de la lettre 'M'
 * </param>
 *
 */

void    afficher_majuscule_A_m  (Majuscule_A_m  *lettre_majuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_majuscule_A_w
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres Alpha de la lettre 'W'
 * </remarks>
 *
 * <param type="Majuscule_A_W *" name="lettre_majuscule">
 *  pointeur vers la structure de la lettre 'W'
 * </param>
 *
 */

void    afficher_majuscule_A_w  (Majuscule_A_w  *lettre_majuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

