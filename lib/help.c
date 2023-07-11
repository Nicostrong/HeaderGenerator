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
/*  File: help.c                                                                                        */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 11/07/2023 14:46:31                                                                       */
/*  Updated : 11/07/2023 16:27:32                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libhelp.h"

/*
 * <summary>
 *  void    help
 * </summary>
 *
 * <remarks>
 *  Affichage de l'aide sur l'utilisation du programme HeaderGenarator.
 * </remarks>
 * 
 */

void    help        (void)
{
        printf("/********************************************************************************************************************************************/\n");
        printf("/*                                                                                                                                          */\n");
        printf("/*                                                                                                                                          */\n");
        printf("/*  ::    ::                         ::                                                                            ::                       */\n");
        printf("/*  ::    ::                         ::                                                                            ::                       */\n");
        printf("/*  :+    :+                         :+                                                                          :+:+:+                     */\n");
        printf("/*  +:    +:  +:+:+:    +:+:         +:  +:+:+:  +: +:+:   :+:+:+   +:+:+:  +: +:+    +:+:+:  +: +:+:    +:+:      +:      +:+:   +: +:+:   */\n");
        printf("/*  ++++++++ ++    ++  ++  ++   +++++++ ++    ++ +++   ++ +:    +: ++    ++ +++   ++ ++    ++ +++   ++  ++  ++     ++     ++  ++  +++   ++  */\n");
        printf("/*  +#    +# +#+#+#+# +#    +# +#    +# +#+#+#+# +#       ++    ++ +#+#+#+# +#    +# +#+#+#+# +#       +#    +#    +#    +#    +# +#        */\n");
        printf("/*  #+    #+ #+        #+  #+# #+    #+ #+       #+        +#+#+#  #+       #+    #+ #+       #+        #+  #+#    #+     #+  #+  #+        */\n");
        printf("/*  ##    ##   ####     ###  #  #######   ####   ##             ##   ####   ##    ##   ####   ##         ###  #     ###    ####   ##        */\n");
        printf("/*                                                              ##                                                                          */\n");
        printf("/*  #############################################################                                                                           */\n");
        printf("/********************************************************************************************************************************************/\n");
        printf("\n\t\t\t\t\t\tWelcome to the help of the program's\n\n");
        printf("\t\t\t\t\t\t\tHeaderGenerator\n\n");
        printf("Here, you can read somes informations about how to use this litle but wonderfull program.\n");
        printf("For start, look about the synospsys \n\n");
        printf("\t./HeaderGenerator [-help] <label>|<\"la bel\"> <style -c|-a> [lenght of banner -L80|-L120] [position of label -Pl|-Pm|-Pr] <filename>\n\n");
        printf("\t./HeaderGenerator [-help] :\n\n");
        printf("Use this command for show this help.\n\n");
        printf("\t ./HeaderGenerator <label> | \"la bel\" :\n\n");
        printf("Here you have the label without space ou with space, for this last, you mays use a double quote for containe the label.\n");
        printf("Exemples for label :\n\n");
        printf("\t./HeaderGenerator Xtrem\n");
        printf("\t./HeaderGenerator \"The king\"\n\n");
        printf("Naturely, you can't use just a label argument for the program run.\n\n");
        printf("\t./HeaderGenerator <label>|<\"la bel\"> <style -c|-a>n :\n\n");
        printf("With this program, you can choose betwenne two libs, to transform the label on graphical's label.\n");
        printf("You must set one of this two args :\n\n");
        printf("\t-c => For generate a header with a ASCIIArt chars.\n");
        printf("\t-a => For generate a header with alpha chars.\n\n");
        printf("Exemples to use this not optionnal args :\n\n");
        printf("\t./HeaderGenarator Xtrem -c\n");
        printf("\t./HeaderGenarator \"The King\" -a\n\n");
        printf("Naturely, you can't use just a label and style arguments for the program run.\n\n");
        printf("\t./HeaderGenerator <label>|<\"la bel\"> <style -c|-a> <filename> :\n\n");
        printf("This is the minimal arguments you mays use for running the program.\n");
        printf("In fact, this program creat a graphycal header and save it on a file with the filename who you have indicate.\n");
        printf("Don't forget the extension of your file, it's very important for generate the frame of the header.\n\n");
        printf("Exemples :\n\n");
        printf("\t./HeaderGenerator Xtrem  -c My_header.c\n");
        printf("\t./HeaderGenerator \"The King\" -a My_header.cpp\n\n");
        printf("This is the minimal syntax for using this program.\n\n");
        printf("\t\tOPTIONS\n\n");
        printf("\t./HeaderGenerator <label>|<\"la bel\"> <style -c|-a> [lenght of banner -L80|-L120] <filename> :\n\n");
        printf("The first option in used for fix the lenght of the banner\n");
        printf("You can choose betwenne two option of lenght.\n\n");
        printf("\t-L80 => With this option, the lenght is locked at 80 chars.\n");
        printf("\t-L120 => With this option, the lenght is locked at 120 chars.\n\n");
        printf("By default the lenght isn't locked. Just the maximal lenght is locked at 135 chars.\n");
        printf("When you are a label who generate 96 chars, you obtain a banner with this size.\n\n");
        printf("\t\t//!\\\\\t\tCaution\t\t//!\\\\\n\n");
        printf("When you use this argument and your label is to lenght for respect this limit, the program generate an error message.\n\n");
        printf("\t./HeaderGenerator <label>|<\"la bel\"> <style -c|-a> [position of label -Pl|-Pm|-Pr] <filename>\n\n");
        printf("This option is for the justify of the label on the frame.\n");
        printf("You can choose betwenne three options\n\n");
        printf("\t-Pl => For a left justify of the label on the frame.\n");
        printf("\t-Pm => For center the label on the frame.\n");
        printf("\t-Pr => For a right justify of the label on the frame.\n\n");
        printf("Exemples :\n\n");
        printf("\t./HeaderGenerator Xtrem  -c -L120 -Pl My_header.c\n");
        printf("\t./HeaderGenerator \"The King\" -a -L120 -Pm My_header.cpp\n");
        printf("\t./HeaderGenerator \"Of The World\" -c -L120 -Pr My_header.cpp\n\n");
        printf("The first exemple show a heder with a left label on the frame.\n");
        printf("The second exemple show a heder with a center label on the frame.\n");
        printf("The third exemple show a heder with a right label on the frame.\n\n");
        printf("\t\tTo resume\n\n");
        printf("The best practice is using all options of this program.\n");
        printf("With using all options, you choose the final render of the banner.\n\n");
        printf("\tFor ameliorate this program, you can send an email @ nicostrong@msn.com, or you can change directely on the code source of this prog.\n\n");
        printf("\t\t\t\t\t\tNicostrong\n");
}

