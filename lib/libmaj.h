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
/*  Updated : 12/05/2023 17:48:46                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#ifndef __H_LIBMAJ_H__
# define __H_LIBMAJ_H__

#include <stdio.h>

/*
 * <summary>
 *  Fonctions de majuscule_c.c
 * </summary>
 *
 * <remarks>
 *  Structures des lettres majuscules en ASCII Art
 * </remarks>
 *
 */

    struct  Majuscule_C             {
                                    int     caractere;
                                    char    *rows[12][9];
                                    };

    typedef struct  Majuscule_C     Majuscule_C;

    struct  Majuscule_C_i           {
                                    int     caractere;
                                    char    *rows[12][7];
                                    };

    typedef struct  Majuscule_C_i   Majuscule_C_i;

    struct  Majuscule_C_m           {
                                    int     caractere;
                                    char    *rows[12][13];
                                    };

    typedef struct  Majuscule_C_m   Majuscule_C_m;

    struct  Majuscule_C_w           {
                                    int     caractere;
                                    char    *rows[12][16];
                                    };

    typedef struct  Majuscule_C_w   Majuscule_C_w;

    const   void                    *majuscules_C[26];

/*
 * <summary>
 *  Fonctions de majuscule_a.c
 * </summary>
 *
 * <remarks>
 *  Structures des lettres majuscules en Alphachar
 * </remarks>
 *
 */

    struct  Majuscule_A             {
                                    int     caractere;
                                    char    *rows[12][9];
                                    };

    typedef struct  Majuscule_A     Majuscule_A;

    struct  Majuscule_A_i           {
                                    int     caractere;
                                    char    *rows[12][7];
                                    };

    typedef struct  Majuscule_A_i   Majuscule_A_i;

    struct  Majuscule_A_m           {
                                    int     caractere;
                                    char    *rows[12][13];
                                    };

    typedef struct  Majuscule_A_m   Majuscule_A_m;

    struct  Majuscule_A_w           {
                                    int     caractere;
                                    char    *rows[12][16];
                                    };

    typedef struct  Majuscule_A_w   Majuscule_A_w;

    const   void                    *majuscules_A[26];

/*
 * <summary>
 *  Fonctions de majuscule_fx.c
 * </summary>
 *
 * <remarks>
 *  Fonctions gerant l'affichage des lettres majuscules
 *      en ASCII Art
 *      en Alphachar
 * </remarks>
 *
 */

    void    afficher_majuscule_C    (Majuscule_C    *numero_lettre_majuscule);
    
    void    afficher_majuscule_C_i  (Majuscule_C_i  *numero_lettre_majuscule);
    
    void    afficher_majuscule_C_m  (Majuscule_C_m  *numero_lettre_majuscule);
    
    void    afficher_majuscule_C_w  (Majuscule_C_w  *numero_lettre_majuscule);
    
    void    afficher_maj_C          (void   *numero_lettre_majuscule);

    void    afficher_majuscule_A    (Majuscule_A    *numero_lettre_majuscule);
    
    void    afficher_majuscule_A_i  (Majuscule_A_i  *numero_lettre_majuscule);
    
    void    afficher_majuscule_A_m  (Majuscule_A_m  *numero_lettre_majuscule);
    
    void    afficher_majuscule_A_w  (Majuscule_A_w  *numero_lettre_majuscule);

    void    afficher_maj_A          (void   *numero_lettre_majuscule);

#endif

