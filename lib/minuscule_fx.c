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
/*  File: minuscule_fx.c                                                                                */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 24/04/2023 15:58:35                                                                       */
/*  Updated : 15/05/2023 10:44:36                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libmin.h"

/*
 * <summary>
 *  afficher_min_C
 * </summary>
 *
 * <remarks>
 *  Fonction generique qui appel une fonction pour afficher une lettre minuscule en caractere ASCII Art
 * </remarks>
 *
 * <param type="void *" name="numero_lettre_minuscule">
 *  pointeur vers le numero de la lettre
 * </param>
 *
 * <subfunction>
 *  afficher_minuscule_C_i
 *  afficher_minuscule_C_m
 *  afficher_minuscule_C_w
 *  afficher_minuscule_C
 * </subfunction>
 *
 */

void    afficher_min_C          (void   *numero_lettre_minuscule)
{
        int i   =   *(int   *)  numero_lettre_minuscule;

        if(i == 8)
        
            afficher_minuscule_C_i((Minuscule_C_i   *)  minuscules_C[i]);
        
        else if(i == 12)
            
            afficher_minuscule_C_m((Minuscule_C_m  *)  minuscules_C[i]);
        
        else if(i == 22)
            
            afficher_minuscule_C_w((Minuscule_C_w   *)  minuscules_C[i]);
        
        else
            
            afficher_minuscule_C((Minuscule_C       *)  minuscules_C[i]);
}

/*
 * <summary>
 *  afficher_minuscule_C
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres ASCII d'une lettre minuscule
 * </remarks>
 *
 * <param type="Minuscule_C *" name="lettre_minuscule">
 *  pointeur vers la structure de la lettre
 * </param>
 *
 */

void    afficher_minuscule_C    (Minuscule_C    *lettre_minuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_minuscule_C_i
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres ASCII de la lettre 'i'
 * </remarks>
 *
 * <param type="Minuscule_C_i *" name="lettre_minuscule">
 *  pointeur vers la structure de la lettre 'i'
 * </param>
 *
 */

void    afficher_minuscule_C_i  (Minuscule_C_i  *lettre_minuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_minuscule_C_m
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres ASCII de la lettre 'm'
 * </remarks>
 *
 * <param type="Minuscule_C_m *" name="lettre_minuscule">
 *  pointeur vers la structure de la lettre 'm'
 * </param>
 *
 */

void    afficher_minuscule_C_m  (Minuscule_C_m  *lettre_minuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_minuscule_C_w
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres ASCII de la lettre 'w'
 * </remarks>
 *
 * <param type="Minuscule_C_w *" name="lettre_minuscule">
 *  pointeur vers la structure de la lettre 'w'
 * </param>
 *
 */

void    afficher_minuscule_C_w  (Minuscule_C_w  *lettre_minuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_min_A
 * </summary>
 *
 * <remarks>
 *  Fonction generique qui appel une fonction pour afficher une lettre minuscule en caracteres alpha
 * </remarks>
 *
 * <param type="void *" name="numero_lettre_minuscule">
 *  pointeur vers le numero de la lettre
 * </param>
 *
 * <subfunction>
 *  afficher_minuscule_A_i
 *  afficher_minuscule_A_m
 *  afficher_minuscule_A_w
 *  afficher_minuscule_A
 * </subfunction>
 *
 */

void    afficher_min_A          (void   *numero_lettre_minuscule)
{
        int i   =   *(int   *)  numero_lettre_minuscule;

        if(i == 8)
        
            afficher_minuscule_A_i((Minuscule_A_i   *)  minuscules_A[i]);
        
        else if(i == 12)
            
            afficher_minuscule_A_m((Minuscule_A_m  *)  minuscules_A[i]);
        
        else if(i == 22)
            
            afficher_minuscule_A_w((Minuscule_A_w   *)  minuscules_A[i]);
        
        else
            
            afficher_minuscule_A((Minuscule_A       *)  minuscules_A[i]);
}

/*
 * <summary>
 *  afficher_minuscule_w
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres Alpha d'une lettre
 * </remarks>
 *
 * <param type="Minuscule_A *" name="lettre_minuscule">
 *  pointeur vers la structure d'une lettre
 * </param>
 *
 */

void    afficher_minuscule_A    (Minuscule_A    *lettre_minuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_minuscule_A_i
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres Alpha de la lettre 'i'
 * </remarks>
 *
 * <param type="Minuscule_A_i *" name="lettre_minuscule">
 *  pointeur vers la structure de la lettre 'i'
 * </param>
 *
 */

void    afficher_minuscule_A_i  (Minuscule_A_i  *lettre_minuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_minuscule_A_m
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres Alpha de la lettre 'm'
 * </remarks>
 *
 * <param type="Minuscule_A_m *" name="lettre_minuscule">
 *  pointeur vers la structure de la lettre 'm'
 * </param>
 *
 */

void    afficher_minuscule_A_m  (Minuscule_A_m  *lettre_minuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

/*
 * <summary>
 *  afficher_minuscule_A_w
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les caracteres Alpha de la lettre 'w'
 * </remarks>
 *
 * <param type="Minuscule_A_w *" name="lettre_minuscule">
 *  pointeur vers la structure de la lettre 'w'
 * </param>
 *
 */

void    afficher_minuscule_A_w  (Minuscule_A_w  *lettre_minuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

