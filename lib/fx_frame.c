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
/*  Updated : 16/05/2023 16:51:10                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

/*
 * <summary>
 *  void    aff_frame
 * </summary>
 *
 * <remarks>
 *  Affichage de la bordure
 * </remarks>
 *
 * <param type="char **" name="ban">tableau constituant la banniere</param>
 * <param type="int" name="len_ban">longueur de la banniere en caractere</param>
 *
 * <subfunction>
 *  ft_putstartline
 *  ft_putmiddleline
 * </subfunction>
 *
 */

void    aff_frame                   (char **ban, int len_ban)
{
        printf("Voiçi la banniere dans la frame : \n");

        int     len_frame;
        len_frame       = len_ban + 7;

        ft_putstartline('/', '*', '/', len_frame);
        
        for(int ligne = 0; ligne < 12; ligne++)
        {
            ft_putmiddleline('/', ban, '/', len_frame, len_ban, ligne);
        }
        
        ft_putstartline('/', '*', '/', len_frame);
}

/*
 * <summary>
 *  void    ft_putstartline 
 * </summary>
 *
 * <remarks>
 *  formatage de la premiere ligne de la frame
 *  identique a la derniere ligne
 * </remarks>
 *
 * <param type="char" name="start">caractere de depart</param>
 * <param type="char" name="middle">caractere du millieu</param>
 * <param type="char" name="end">caractere de fin</param>
 * <param type="int" name="len">nombre de caractere de la ligne</param>
 *
 * <subfunction>
 *  ft_putchar
 * </subfunction>
 *
 */

void    ft_putstartline             (char start, char middle, char end, int len)
{
        ft_putchar(start);
        len--;
        
        while(len > 1)
        {
            ft_putchar(middle);
            len--;
        }
        
        if(len == 1)
            ft_putchar(end);
    
        ft_putchar('\n');
}

/*
 * <summary>
 *  void    ft_putmiddleline
 * </summary>
 *
 * <remarks>
 *  formatage de la trame centrale de la banniere dans la frame
 * </remarks>
 *
 * <param type="char" name="start">caractere de depart</param>
 * <param type="char **" name="ban">tableau de caractere de la banniere</param>
 * <param type="char" name="end">caractere de fin</param>
 * <param type="int" name="len_frame">nombre de caractere de la ligne</param>
 * <param type="int" name="len_ban">nombre de caractere de la banniere</param>
 * <param type="int" name="ligne">numero de la ligne</param>
 *
 * <subfunction>
 *  ft_putchar
 * </subfunction>
 *
 */

void    ft_putmiddleline        (char start, char **ban, char end, int len_frame, int len_ban, int ligne)
{
        ft_putchar(start);
        len_frame--;
        ft_putchar('*');
        len_frame--;
        ft_putchar(' ');
        len_frame--;
        ft_putchar(' ');
        len_frame--;

        for(int i = 0; i < len_ban; i++)
        {
            ft_putchar(ban[ligne][i]);
            len_frame--;
        }

        if(len_frame == 3)
        {
            ft_putchar(' ');
            ft_putchar('*');
            ft_putchar(end);
            ft_putchar('\n');
        }
}
/*
void    frame                       (char **ban, int length, int height)
{
        char    start = '/';
        char    middle = '*';
        char    hauteur = '*';
        char    mid_haut = ' ';

        ft_putline(start, middle, start, lenght);
        height--;

        while(height > 1)
        {
            ft_putline(hauteur, mid_haut, hauteur, length);
            height--;
        }

        if (height == 1)
            ft_putline(start, middle, start, length);
}
*/
