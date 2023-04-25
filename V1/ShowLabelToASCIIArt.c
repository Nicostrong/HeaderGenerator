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
/*  File: ShowLabelToASCIIArt.c                                                                         */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 25/04/2023 15:02:06                                                                       */
/*  Updated : 25/04/2023 16:32:31                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "lib/functions.h"
#include "lib/libmin.h"
#include "lib/libmaj.h"
#include "lib/libch.h"

int     main(int    argc, char  **argv)
{
    char    *label              =   malloc(sizeof(char) *   50);
    char    *filename           =   malloc(sizeof(char) *   50);
    int     *longueur_header    =   malloc(sizeof(int)  *   200);
    int     longueur_label;

    if(!label || !filename || !longueur_header)
    {
        printf("Erreur d'allocution de la memoire");
        free(label);
        free(filename);
        free(longueur_header);
        return (1);
    }

    label[0]        =   '\0';
    filename[0]     =   '\0';
    longueur_label  =   0;


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

    longueur_label  =   calcul_longueur_ligne(label);
    calcul_longueur_header(label, longueur_label, longueur_header);

    printf("Label: %s\n", label);
    for(int i = 0; i < longueur_label; i++)
    {
        printf("caractere %d : %c\n", i,label[i]);
    }
    printf("Nombre de caractere: %d\n", longueur_label);
    printf("Nombre de caractere du header: %d\n", longueur_header);
    printf("Filename: %s\n", filename);

    free(label);
    free(filename);
    free(longueur_header);

    return (0);
}
