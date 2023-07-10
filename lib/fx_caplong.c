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
/*  File: fx_caplong.c                                                                                  */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 13/06/2023 12:29:44                                                                       */
/*  Updated : 10/07/2023 16:42:02                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

/*
 * <summary>
 *  bool    find_arobase
 * </summary>
 *
 * <remarks>
 *  Fonction qui lit une ligne de la banniere a la recherche du symnole '@'
 *  retourne vrai si presence de '@'
 *  sauvegarde la position du '@'
 *  sauvegarde le caractere precedent et suivant
 * </remarks>
 *
 * <param type="char" name="letter">caractere a trouver</param>
 * <param type="int" name="line">ligne de recharche</param>
 * <param type="int" name="len_header">longueur de la banniere</param>
 * <param type="char **" name="ban">tableau de caractere</param>
 * <param type="char *" name="charleft">caractere a gauche de '@'</param>
 * <param type="char *" name="charright">caractere a droite de '@'</param>
 *
 * <return>
 *  True si présence du caractere '@'
 *  False si pas de '@'
 * </return>
 *
 */

bool    find_arobase        (char letter, int line, int len_header, char **ban, char *charleft, char *charright, int *pos_arobase)
{
        *charleft    =   '0';
        *charright   =   '0';

        for(int i = 0; i < len_header; i++)
        {
            if(ban[line][i] == letter)
            {
                *pos_arobase = i;

                if(ban[line][i-1] != ' ')
                    *charleft = ban[line][i-1];
                else
                    *charright = ban[line][i+1];
                if(i == 0)
                {
                    *charright = ban[line][i+1];
                    *charleft = '0';
                }
                return true;
            }
        }

        return false;
}        

/*
 * <summary>
 *  void    prolonge arobase
 * </summary>
 *
 * <remarks>
 *  d'apres les arguments, copie de caractere precedent ou suivant l' '@' vers
 *  le debut ou la fin du header
 * </remarks>
 *
 * <param type="int" name="line">ligne de la banniere</param>
 * <param type="int" name="pos_arobase">position de l' '@' dans la ligne</param>
 * <param type="char" name="charleft">caractere avant '@'</param>
 * <param type="char" name="charright">caractere apres '@'</param>
 * <param type="int" name="len_header">longueur de la baniere</param>
 * <param type="char **" name="ban">tableau de caractere</param>
 *
 */

void    prolonge_arobase    (int line, int pos_arobase, char charleft, char charright, int len_header, char **ban)
{
    if(charleft != '0')
    {
        printf("Etirement vers la droite\n");
        for(int i = pos_arobase; i <= len_header; i++)
            ban[line][i] = charleft;

    }
    else
    {
        printf("Etirement vers la gauche.\n");
        for(int i = pos_arobase; i == 0; i--)
            ban[line][i] = charright;
    }
}

