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
/*  Updated : 05/05/2023 14:35:27                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libmaj.h"

// Fonctions d'affichege des letttres majuscules en ASCII art

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

void    afficher_majuscule_C   ( Majuscule_C    *lettre_majuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

void    afficher_majuscule_C_i  (Majuscule_C_i  *lettre_majuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

void    afficher_majuscule_C_m  (Majuscule_C_m  *lettre_majuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

void    afficher_majuscule_C_w  (Majuscule_C_w  *lettre_majuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

// Fonctions d'affichege des letttres majuscules en alpha

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

void    afficher_majuscule_A    (Majuscule_A    *lettre_majuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

void    afficher_majuscule_A_i  (Majuscule_A_i  *lettre_majuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

void    afficher_majuscule_A_m  (Majuscule_A_m  *lettre_majuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

void    afficher_majuscule_A_w  (Majuscule_A_w  *lettre_majuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_majuscule->rows[i]);
        }
}

