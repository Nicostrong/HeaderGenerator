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
/*  File: Version.c                                                                                     */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 02/05/2023 15:48:45                                                                       */
/*  Updated : 02/05/2023 16:03:54                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

        Pour arriver a creer mon programme HeaderGenarator, je vais proceder petit a petit,
        etape par etape.

        Vous pourrez observer l'evolution du code a trevers ces differentes etapes.

        Au final, j'espere obtenir un programme fonctionnel sans bug et correctement code.

V1  :   "ShowAllChar"

    Dans cette version, la première, j'affiche toutes les tables de caracteres contenu dans
    les bibliotheques majuscule, minuscule et chiffre.

    Je les affiche en caractere ASCII Art puis en version alphabetique ou numerique pour les 
    chiffres.

V2  :  "ShowLabelFilename"

    Dans cette version, je vais juste recuperer deux arguments que nous passerons lors du
    lancement du programme.

    Le premier sera copie dans la variable "label", c'est cette variable qui sera transforme
    en caracteres ASCII Art.

    Le second sera le nom du fichier dans lequel sera sauvegarde la banniere.

    Pour l'instant, je me contente juste de recupere le nom et de l'enregistrer dans la
    variable "filename".

V3  :   "ShowLabelToASCIIArt"

    Les choses serieuses commence, dans cette version je vais afficher un debut de banniere.

    En effet, je vais transformer le "label" en caracteres ASCII Art et l'afficher.

V4  :   "ShowLabelOnFrame"

    Maintenant que nous avons notre "label" en caractere ASCII Art, nous allons ajouter
    un cadre autour de ce "label".

    Dans un premier temps, le cadre sera compose de caractere de commentaire pour les fichiers
    de type .c



