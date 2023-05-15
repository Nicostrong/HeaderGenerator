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
/*  Updated : 15/05/2023 15:37:35                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"


/*
 * <summary>
 *  void    ft_putline 
 * </summary>
 *
 * <remarks>
 *  formatage d'une ligne de la frame
 * </remarks>
 *
 * <param type="char" name="strat">caractere de depart</param>
 * <param type="char" name="middle">caractere du millieu</param>
 * <param type="char" name="end">caractere de fin</param>
 * <param type="int" name="longueur">nombre de caractere de la ligne</param>
 *
 * <subfunction>
 *  ft_putchar
 * </subfunction>
 *
 */

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

/*
 * <summary>
 *  void    frame
 * </summary>
 *
 * <remarks>
 *  creation de la bordure
 * </remarks>
 *
 * <param type="int" name="length">longueur de la frame</param>
 * <param type="int" name="height">nombre de ligne de la frame</param>
 *
 * <subfunction>
 *  write
 *  ft_putline
 * </subfunction>
 *
 */

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

