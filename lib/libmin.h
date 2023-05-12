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
/*  Updated : 12/05/2023 17:48:54                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#ifndef __H_LIBMIN_H__
# define __H_LIBMIN_H__

#include <stdio.h>

/*
 * <summary>
 *  Fonctions de minuscule_c.c
 * </summary>
 *
 * <remarks>
 *  Structures des lettres minuscules en ASCII Art
 * </remarks>
 *
 */

    struct  Minuscule_C             {
                                    int     caractere;
                                    char    *rows[12][9];
                                    };

    typedef struct  Minuscule_C     Minuscule_C;

    struct  Minuscule_C_i           {
                                    int     caractere;
                                    char    *rows[12][7];
                                    };

    typedef struct  Minuscule_C_i   Minuscule_C_i;

    struct  Minuscule_C_m           {
                                    int     caractere;
                                    char    *rows[12][13];
                                    };

    typedef struct  Minuscule_C_m   Minuscule_C_m;

    struct  Minuscule_C_w           {
                                    int     caractere;
                                    char    *rows[12][16];
                                    };

    typedef struct  Minuscule_C_w   Minuscule_C_w;

    const   void                    *minuscules_C[26];

/*
 * <summary>
 *  Fonctions de minuscule_a.c
 * </summary>
 *
 * <remarks>
 *  Structures des lettres minuscules en Alphachar
 * </remarks>
 *
 */
    struct  Minuscule_A             {
                                    int     caractere;
                                    char    *rows[12][9];
                                    };

    typedef struct  Minuscule_A     Minuscule_A;


    struct  Minuscule_A_i           {
                                    int     caractere;
                                    char    *rows[12][7];
                                    };

    typedef struct  Minuscule_A_i   Minuscule_A_i;


    struct  Minuscule_A_m           {
                                    int     caractere;
                                    char    *rows[12][13];
                                    };

    typedef struct  Minuscule_A_m   Minuscule_A_m;


    struct  Minuscule_A_w           {
                                    int     caractere;
                                    char    *rows[12][16];
                                    };

    typedef struct  Minuscule_A_w   Minuscule_A_w;


    const   void                    *minuscules_A[26];

/*
 * <summary>
 *  Fonctions de minuscule_fx.c
 * </summary>
 *
 * <remarks>
 *  Fonctions gerant l'affichage des lettres minuscules
 *      en ASCII Art
 *      en Alphachar
 * </remarks>
 *
 */

    void    afficher_minuscule_C    (Minuscule_C    *numero_lettre_minuscule);
    
    void    afficher_minuscule_C_i  (Minuscule_C_i  *numero_lettre_minuscule);

    void    afficher_minuscule_C_m  (Minuscule_C_m  *numero_lettre_minuscule);
    
    void    afficher_minuscule_C_w  (Minuscule_C_w  *numero_lettre_minuscule);
    
    void    afficher_min_C          (void   *numero_lettre_minuscule);

    void    afficher_minuscule_A    (Minuscule_A    *numero_lettre_minuscule);

    void    afficher_minuscule_A_i  (Minuscule_A_i  *numero_lettre_minuscule);
    
    void    afficher_minuscule_A_m  (Minuscule_A_m  *numero_lettre_minuscule);
    
    void    afficher_minuscule_A_w  (Minuscule_A_w  *numero_lettre_minuscule);
    
    void    afficher_min_A          (void   *numero_lettre_minuscule);

#endif

