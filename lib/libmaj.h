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
/*  File: libmaj.h                                                                                      */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 24/04/2023 15:39:48                                                                       */
/*  Updated : 05/05/2023 15:56:43                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#ifndef __H_LIBMAJ_H__
# define __H_LIBMAJ_H__

#include <stdio.h>

// Fonctions des lettres majuscules en ASCII Art

struct  Majuscule_C             {
                                int     caractere;
                                char    *rows[12][9];
                                };

typedef struct  Majuscule_C     Majuscule_C;

void    afficher_majuscule_C    (Majuscule_C    *numero_lettre_majuscule);

struct  Majuscule_C_i           {
                                int     caractere;
                                char    *rows[12][7];
                                };

typedef struct  Majuscule_C_i   Majuscule_C_i;

void    afficher_majuscule_C_i  (Majuscule_C_i  *numero_lettre_majuscule);

struct  Majuscule_C_m           {
                                int     caractere;
                                char    *rows[12][13];
                                };

typedef struct  Majuscule_C_m   Majuscule_C_m;

void    afficher_majuscule_C_m  (Majuscule_C_m  *numero_lettre_majuscule);

struct  Majuscule_C_w           {
                                int     caractere;
                                char    *rows[12][16];
                                };

typedef struct  Majuscule_C_w   Majuscule_C_w;

void    afficher_majuscule_C_w  (Majuscule_C_w  *numero_lettre_majuscule);

const   void                    *majuscules_C[26];

void    afficher_maj_C          (void   *numero_lettre_majuscule);

// Fonctions des lettres majuscules en alpha

struct  Majuscule_A             {
                                int     caractere;
                                char    *rows[12][9];
                                };

typedef struct  Majuscule_A     Majuscule_A;

void    afficher_majuscule_A    (Majuscule_A    *numero_lettre_majuscule);

struct  Majuscule_A_i           {
                                int     caractere;
                                char    *rows[12][7];
                                };

typedef struct  Majuscule_A_i   Majuscule_A_i;

void    afficher_majuscule_A_i  (Majuscule_A_i  *numero_lettre_majuscule);

struct  Majuscule_A_m           {
                                int     caractere;
                                char    *rows[12][13];
                                };

typedef struct  Majuscule_A_m   Majuscule_A_m;

void    afficher_majuscule_A_m  (Majuscule_A_m  *numero_lettre_majuscule);

struct  Majuscule_A_w           {
                                int     caractere;
                                char    *rows[12][16];
                                };

typedef struct  Majuscule_A_w   Majuscule_A_w;

void    afficher_majuscule_A_w  (Majuscule_A_w  *numero_lettre_majuscule);

const   void                    *majuscules_A[26];

void    afficher_maj_A          (void   *numero_lettre_majuscule);

#endif

