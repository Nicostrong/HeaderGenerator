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
/*  Updated : 24/04/2023 16:59:36                                                                       */
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

struct  Minuscule_C_mn          {
                                int     caractere;
                                char    *rows[12][13];
                                };

typedef struct  Minuscule_C_mn  Minuscule_C_mn;

void    afficher_minuscule_C_mn (Minuscule_C_mn *numero_lettre_minuscule);

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

struct  Minuscule_A_mn          {
                                int     caractere;
                                char    *rows[12][13];
                                };

typedef struct  Minuscule_A_mn  Minuscule_A_mn;

void    afficher_minuscule_A_mn (Minuscule_A_mn *numero_lettre_minuscule);

struct  Minuscule_A_w           {
                                int     caractere;
                                char    *rows[12][16];
                                };

typedef struct  Minuscule_A_w   Minuscule_A_w;

void    afficher_minuscule_A_w  (Minuscule_A_w  *numero_lettre_minuscule);

const   void                    *minuscules_A[26];

void    afficher_min_A          (void   *numero_lettre_minuscule);

#endif

