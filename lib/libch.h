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
/*  File: libch.h                                                                                       */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 24/04/2023 15:48:40                                                                       */
/*  Updated : 12/05/2023 17:25:14                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#ifndef __H_LIBCH_H__
# define __H_LIBCH_H__

#include <stdio.h>

/*
 * <summary>
 *  Fonctions de chiffre_c.c
 * </summary>
 *
 * <remarks>
 *  Structure des chiffres en caractere ASCII Art
 * </remarks>
 *
 */

    struct  Chiffre_C               {
                                    int     caractere;
                                    char    *rows[12][9];
                                    };

    typedef struct  Chiffre_C       Chiffre_C;

    const   Chiffre_C               *chiffres_C[10];

/*
 * <summary>
 *  Fonctions de chiffre_n.c
 * </summary>
 *
 * <remarks>
 *  Structure des chiffres en caractere numerique
 * </remarks>
 *
 */

    struct  Chiffre_N               {
                                    int     caractere;
                                    char    *rows[12][9];
                                    };

    typedef struct  Chiffre_N       Chiffre_N;

    const   Chiffre_N               *chiffres_N[10];

/*
 * <summary>
 *  Fonctions de chiffre_fx.c
 * </summary>
 *
 * <remarks>
 *  fonctions d'affichage des chiffres
 * </remarks>
 *
 */

    void    afficher_chiffre_C      (Chiffre_C  *chiffre);

    void    afficher_chiffre_N      (Chiffre_N  *chiffre);

#endif

