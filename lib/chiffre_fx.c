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
/*  File: chiffre_fx.c                                                                                  */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 24/04/2023 16:16:47                                                                       */
/*  Updated : 15/05/2023 10:34:16                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libch.h"

/*
 * <summary>
 *  afficher_chiffre_c
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les chiffres en caractere ASCII Art
 * </remarks>
 *
 * <param type="Chiffre_C *" name="chiffre">
 *  pointeur vers la structure d'un chiffre
 * </param>
 *
 */

void    afficher_chiffre_C      (Chiffre_C      *chiffre)
{
        for(int l = 0; l < 12; l++)
        {
            printf("%s\n", *chiffre->rows[l]);
        }
}

/*
 * <summary>
 *  afficher_chiffre_N
 * </summary>
 *
 * <remarks>
 *  Fonction qui affiche les chiffres en caractere numerique
 * </remarks>
 *
 * <param type="Chiffre_N *" name="chiffre">
 *  pointeur vers la structure d'un chiffre
 * </param>
 *
 */

void    afficher_chiffre_N      (Chiffre_N      *chiffre)
{
        for(int i = 0; i < 12; i++)
        {
            printf("%s\n", *chiffre->rows[i]);
        }
}

