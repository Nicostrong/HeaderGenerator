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
/*  File: fx_frame.c                                                                                    */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 05/05/2023 17:00:46                                                                       */
/*  Updated : 05/05/2023 17:15:10                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

void    ft_putline                  (char start, char middle, char end, int longueur)
{
        ft_putchar(start);
        longueur--;

        while(longueur > 1)
        {
            ft_putchar(middle);
            longueur--;
        }
        
        if(longueur == 1)
            ft_putchar(end);
    
        ft_putchar('\n');
}

void    frame                       (int    length, int  height)
{
        char    start = 'O';
        char    middle = '-';
        char    hauteur = '|';
        char    mid_haut = ' ';

        if(length < 1 || height < 1)
        {
            char    error[] = "Veuillez entrer des parametres x et y plus grand que '0'!!!\n";
            write(1, error, 62);
            return;
        }

        ft_putline(start, middle, start, length);
        height--;

        while(height > 1)
        {
            ft_putline(hauteur, mid_haut, hauteur, length);
            height--;
        }

        if (height == 1)
            ft_putline(start, middle, start, length);
}

