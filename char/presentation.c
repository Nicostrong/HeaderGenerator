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
/*  File: presentation.c                                                                                */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 14/04/2023 15:01:28                                                                       */
/*  Updated : 14/04/2023 15:10:54                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

//                                      HeaderGenerator

// Description :

// L’utilisateur exécute le programme en lui donnant en paramètre un nom, numéro, code, … qui sera transformé
// visuellement dans l’entête, et un nom de fichier avec son extension qui contiendra l’entête personnalisée.

// Filename => nom du fichier avec extension
// Label => mot à formater

// Versions : (évolution souhaité du programme)

// Version 1 => génération simple du header
// Version 2 => différence entre majuscule et minuscule
// Version 3 => différentes polices (gras, fine, italique)
// Version 4 => version interactif, aucun argument, on répond au programme en renseignant les infos demandées.

// Visualisation du résultat et moyen de modifier ou d’enregistrer le fichier final.

// Version 5 => a trouver

// Architecture :

// Un fichier source pour les minuscules
// Un fichier source pour les majuscules
// Un fichier source pour les chiffres
// Un fichier source pour les cadres
// Un fichier source de départ
// Un fichier source de fonctions de traitement et calcul
// Un fichier source de fonction d’affichage
// Un fichier source pour l’interactivité

// Principe :

// Version 1 :

// On récupère les arguments <label> et  <filename>

// On récupère le type d’extension de <filename> pour créer le cadre

// On traite le <label>

// On split les caractères

// On calcul la longueur d’une ligne de caractère

// On insère les caractères de chaque caractère du <label> séparé par deux espèces (ou un à voir) ligne par ligne

// On crée un tableau contenant tout les caractères du header (cadre + label)

// On affiche le header et on crée le fichier de destination.

// Fonctions :

// Calcul du nombre de caractères par ligne
// Sélection du type de cadre
// Affichage du header
// Création du fichier

