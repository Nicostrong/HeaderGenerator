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
/*  File: libmin.h                                                                                      */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 24/04/2023 15:33:01                                                                       */
/*  Updated : 04/05/2023 11:28:56                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#ifndef __H_LIBMIN_H__
# define __H_LIBMIN_H__

#include <stdio.h>

// Fonctions des lettres minuscules en ASCII Art

struct  Minuscule_C             {
                                int     caractere;
                                char    *rows[12][9];
                                };

typedef struct  Minuscule_C     Minuscule_C;

void    afficher_minuscule_C    (Minuscule_C    *numero_lettre_minuscule);

struct  Minuscule_C_i           {
                                int     caractere;
                                char    *rows[12][7];
                                };

typedef struct  Minuscule_C_i   Minuscule_C_i;

void    afficher_minuscule_C_i  (Minuscule_C_i  *numero_lettre_minuscule);

struct  Minuscule_C_m           {
                                int     caractere;
                                char    *rows[12][13];
                                };

typedef struct  Minuscule_C_m   Minuscule_C_m;

void    afficher_minuscule_C_m  (Minuscule_C_m  *numero_lettre_minuscule);

struct  Minuscule_C_w           {
                                int     caractere;
                                char    *rows[12][16];
                                };

typedef struct  Minuscule_C_w   Minuscule_C_w;

void    afficher_minuscule_C_w  (Minuscule_C_w  *numero_lettre_minuscule);

const   void                    *minuscules_C[26];

void    afficher_min_C          (void   *numero_lettre_minuscule);

// Fonctions des lettres minuscules en alpha

struct  Minuscule_A             {
                                int     caractere;
                                char    *rows[12][9];
                                };

typedef struct  Minuscule_A     Minuscule_A;

void    afficher_minuscule_A    (Minuscule_A    *numero_lettre_minuscule);

struct  Minuscule_A_i           {
                                int     caractere;
                                char    *rows[12][7];
                                };

typedef struct  Minuscule_A_i   Minuscule_A_i;

void    afficher_minuscule_A_i  (Minuscule_A_i  *numero_lettre_minuscule);

struct  Minuscule_A_m           {
                                int     caractere;
                                char    *rows[12][13];
                                };

typedef struct  Minuscule_A_m   Minuscule_A_m;

void    afficher_minuscule_A_m  (Minuscule_A_m  *numero_lettre_minuscule);

struct  Minuscule_A_w           {
                                int     caractere;
                                char    *rows[12][16];
                                };

typedef struct  Minuscule_A_w   Minuscule_A_w;

void    afficher_minuscule_A_w  (Minuscule_A_w  *numero_lettre_minuscule);

const   void                    *minuscules_A[26];

void    afficher_min_A          (void   *numero_lettre_minuscule);

#endif

