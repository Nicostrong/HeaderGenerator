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
/*  Updated : 26/04/2023 16:24:45                                                                       */
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

    test_allocation_memoire     (label);
    test_allocation_memoire     (filename);
    test_allocation_memoire     (longueur_header);


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

    char    **banniere          =   calloc(12, sizeof(char *));
    for(int i = 0; i < 12; i++)
        banniere[i] =   calloc(sizeof(longueur_header + 1), sizeof(char));

    test_allocation_memoire     (banniere);
    creer_banniere(label,  &banniere[0], longueur_label);

    printf("Label: %s\n", label);

    for(int i = 0; i < longueur_label; i++)
    {
        printf("caractere %d : %c\n", i,label[i]);
    }

    printf("Nombre de caractere: %d\n", longueur_label);
    printf("Nombre de caractere du header: %d\n", *longueur_header);
    printf("Filename: %s\n", filename);
    printf("Voiçi la bannière :\n");
    show_banniere(&banniere[0]);

    free(label);
    free(filename);
    free(longueur_header);
    for(int i = 0; i < 12; i++)
        free(banniere[i]);
    free(banniere);

    return (0);
}
