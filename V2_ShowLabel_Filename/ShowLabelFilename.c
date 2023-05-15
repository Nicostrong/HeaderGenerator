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
/*  File: ShowLabelFilename.c                                                                           */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 25/04/2023 13:45:19                                                                       */
/*  Updated : 15/05/2023 16:11:06                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "../lib/libfx.h"
#include "../lib/libmin.h"
#include "../lib/libmaj.h"
#include "../lib/libch.h"

/*
 * <summary>
 *  ShowLabelFilename
 * </summary>
 *
 * <remarks>
 *  Affiche le label et le fichier de destination
 * </remarks>
 *
 * <subfunction>
 *  printf
 *  free
 *  ft_strcpy
 *  cal_len_line
 * </subfunction>
 *
 */

int     main(int    argc, char  **argv)
{
    char    *label      =   malloc(sizeof(char) *   50);
    char    *filename   =   malloc(sizeof(char) *   50);
    int     longueur_label;

    if(!label || !filename)
    {
        printf("Erreur d'allocution de la memoire");
        free(label);
        free(filename);
        return (1);
    }

    label[0]    =   '\0';
    filename[0] =   '\0';


    if(argc < 3)
    {
        printf("Usage : %s <label> <filename>\n", argv[0]);
        return (1);
    }

    if(argv[1])
    {
        ft_strcpy(label, argv[1]);
    }

    if(argv[2])
    {   
        ft_strcpy(filename, argv[2]);
    }

    longueur_label  =   cal_len_line(label);

    printf("Label: %s\n", label);
    printf("Nombre de caractere: %d\n", longueur_label);
    printf("Filename: %s\n", filename);

    free(label);
    free(filename);

    return (0);
}

