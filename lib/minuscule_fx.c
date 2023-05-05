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
/*  Updated : 05/05/2023 14:34:43                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libmin.h"

// Fonctions d'affichege des letttres minuscules en ASCII art

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

void    afficher_minuscule_C    (Minuscule_C    *lettre_minuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

void    afficher_minuscule_C_i  (Minuscule_C_i  *lettre_minuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

void    afficher_minuscule_C_m  (Minuscule_C_m  *lettre_minuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

void    afficher_minuscule_C_w  (Minuscule_C_w  *lettre_minuscule)
{

        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

// Fonctions d'affichege des letttres minuscules en alpha

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

void    afficher_minuscule_A    (Minuscule_A    *lettre_minuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

void    afficher_minuscule_A_i  (Minuscule_A_i  *lettre_minuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

void    afficher_minuscule_A_m  (Minuscule_A_m  *lettre_minuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

void    afficher_minuscule_A_w  (Minuscule_A_w  *lettre_minuscule)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *lettre_minuscule->rows[i]);
        }
}

