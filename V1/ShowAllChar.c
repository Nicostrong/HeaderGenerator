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
/*  File: ShowAllChar.c                                                                                 */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 11/04/2023 16:46:17                                                                       */
/*  Updated : 25/04/2023 14:47:25                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "lib/functions.h"
#include "lib/libmin.h"
#include "lib/libmaj.h"
#include "lib/libch.h"

int     main()
{
    for(int a = 0; a < 26; a++)
    {
        afficher_min_C((void    *)  &a);
    }
    
    for(int b = 0; b < 26; b++)
    {
        afficher_min_A((void    *)  &b);
    }

    for(int c = 0; c < 26; c++)
    {
        afficher_maj_C((void    *)  &c);
    }
    
    for(int d = 0; d < 26; d++)
    {
        afficher_maj_A((void    *)  &d);
    }

    for(int x = 0; x < 10; x++)
    {
        afficher_chiffre_C((Chiffre_C   *)  chiffres_C[x]);
    }

    for(int y = 0; y < 10; y++)
    {
        afficher_chiffre_N((Chiffre_N   *)  chiffres_N[y]);
    }

    return (0);
}