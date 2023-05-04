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
/*  File: majuscule_a.c                                                                                 */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 15/04/2023 14:14:16                                                                       */
/*  Updated : 04/05/2023 11:48:53                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libmaj.h"

// le caractere @ indique la prolongation du caractere suivant ou precedent 

const   Majuscule_A     A_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"   AA   "},
        {"  AAAA  "},
        {" AA  AA "},
        {"AA    AA"},
        {"AAAAAAAA"},
        {"AA    AA"},
        {"AA    AA"},
        {"AA    AA"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     B_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"BBBBBBBB"},
        {"BB    BB"},
        {"BB    BB"},
        {"BBBBBBB "},
        {"BB    BB"},
        {"BB    BB"},
        {"BB    BB"},
        {"BBBBBBBB"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     C_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"CCCCCCCC"},
        {"CC      "},
        {"CC      "},
        {"CC      "},
        {"CC      "},
        {"CC      "},
        {"CC      "},
        {"CCCCCCCC"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     D_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"DDDDDDD "},
        {"DD    DD"},
        {"DD    DD"},
        {"DD    DD"},
        {"DD    DD"},
        {"DD    DD"},
        {"DD    DD"},
        {"DDDDDDD "},
        {"        "},
        {"        "}}
};

const   Majuscule_A     E_a =   {
    .caractere  =   8,
    .rows       =   {
        {"EEEEEEE@"},
        {"EE      "},
        {"EE      "},
        {"EE      "},
        {"EE      "},
        {"EEEEE   "},
        {"EE      "},
        {"EE      "},
        {"EE      "},
        {"EEEEEEEE"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     F_a =   {
    .caractere  =   8,
    .rows       =   {
        {"FFFFFFF@"},
        {"FF      "},
        {"FF      "},
        {"FF      "},
        {"FF      "},
        {"FFFFF   "},
        {"FF      "},
        {"FF      "},
        {"FF      "},
        {"FF      "},
        {"        "},
        {"        "}}
};

const   Majuscule_A     G_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {" GGGGGG "},
        {"GG    GG"},
        {"GG    GG"},
        {"GG    GG"},
        {"GGGGGGGG"},
        {"      GG"},
        {"      GG"},
        {"      GG"},
        {"      GG"},
        {"@GGGGGG "}}
};

const   Majuscule_A     H_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"HH    HH"},
        {"HH    HH"},
        {"HH    HH"},
        {"HH    HH"},
        {"HHHHHHHH"},
        {"HH    HH"},
        {"HH    HH"},
        {"HH    HH"},
        {"        "},
        {"        "}}
};

const   Majuscule_A_i   I_a =   {
    .caractere  =   6,
    .rows       =   {
        {"      "},
        {"      "},
        {"  II  "},
        {"  II  "},
        {"  II  "},
        {"  II  "},
        {"  II  "},
        {"  II  "},
        {"  II  "},
        {"  II  "},
        {"      "},
        {"      "}}
};

const   Majuscule_A     J_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"JJJJJJJJ"},
        {"    JJ  "},
        {"    JJ  "},
        {"    JJ  "},
        {"    JJ  "},
        {"    JJ  "},
        {"    JJ  "},
        {"    JJ  "},
        {"    JJ  "},
        {"@JJJJ  "}}
};

const   Majuscule_A     K_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"KK    KK"},
        {"KK   KK "},
        {"KK  KK  "},
        {"KK KK   "},
        {"KKKK    "},
        {"KK  KK  "},
        {"KK   KK "},
        {"KK    KK"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     L_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"LL      "},
        {"LL      "},
        {"LL      "},
        {"LL      "},
        {"LL      "},
        {"LL      "},
        {"LL      "},
        {"LL      "},
        {"LL      "},
        {"LLLLLLL@"}}
};

const   Majuscule_A_m   M_a =   {
    .caractere  =   12,
    .rows       =   {
        {"            "},
        {"            "},
        {"MM        MM"},
        {"MMM      MMM"},
        {"MM MM  MM MM"},
        {"MM  MMMM  MM"},
        {"MM   MM   MM"},
        {"MM        MM"},
        {"MM        MM"},
        {"MM        MM"},
        {"            "},
        {"            "}}
};

const   Majuscule_A     N_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"NN    NN"},
        {"NNN   NN"},
        {"NN N  NN"},
        {"NN N  NN"},
        {"NN  N NN"},
        {"NN  N NN"},
        {"NN   NNN"},
        {"NN    NN"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     O_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"OOOOOOOO"},
        {"OO    OO"},
        {"OO    OO"},
        {"OO    OO"},
        {"OO    OO"},
        {"OO    OO"},
        {"OO    OO"},
        {"OOOOOOOO"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     P_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"PPPPPPPP"},
        {"PP    PP"},
        {"PP    PP"},
        {"PP    PP"},
        {"PPPPPPPP"},
        {"PP      "},
        {"PP      "},
        {"PP      "},
        {"        "},
        {"        "}}
};

const   Majuscule_A     Q_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"QQQQQQQQ"},
        {"QQ    QQ"},
        {"QQ    QQ"},
        {"QQ    QQ"},
        {"QQQQQQQQ"},
        {"      QQ"},
        {"      QQ"},
        {"      QQ"},
        {"        "},
        {"        "}}
};
        
const   Majuscule_A     R_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"RRRRRRRR"},
        {"RR    RR"},
        {"RR    RR"},
        {"RRRRRRRR"},
        {"RR RR   "},
        {"RR  RR  "},
        {"RR   RR "},
        {"RR    RR"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     S_a =   {
    .caractere  =   8,
    .rows       =   {
        {" SSSSSS@"},
        {"SS      "},
        {"SS      "},
        {"SS      "},
        {"SS      "},
        {"SS      "},
        {" SSSSSS "},
        {"      SS"},
        {"      SS"},
        {"      SS"},
        {"      SS"},
        {"@SSSSSS "}}
};

const   Majuscule_A     T_a =   {
    .caractere  =   8,
    .rows       =   {
        {"@TTTTTT@"},
        {"   TT   "},
        {"   TT   "},
        {"   TT   "},
        {"   TT   "},
        {"   TT   "},
        {"   TT   "},
        {"   TT   "},
        {"   TT   "},
        {"   TT   "},
        {"        "},
        {"        "}}
};

const   Majuscule_A     U_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"UU    UU"},
        {"UU    UU"},
        {"UU    UU"},
        {"UU    UU"},
        {"UU    UU"},
        {"UU    UU"},
        {"UU    UU"},
        {"UUUUUUUU"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     V_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"VV    VV"},
        {"VV    VV"},
        {"VV    VV"},
        {"VV    VV"},
        {"VV    VV"},
        {" VV  VV "},
        {"  VVVV  "},
        {"   VV   "},
        {"        "},
        {"        "}}
};
 
const   Majuscule_A_w   W_a =   {
    .caractere  =   15,
    .rows       =   {
        {"               "},
        {"               "},
        {"WW  WW   WW  WW"},
        {"WW   WW WW   WW"},
        {"WW    WWW    WW"},
        {"WW    WWW    WW"},
        {"WW    WWW    WW"},
        {" WW  WW WW  WW "},
        {"  WWWW   WWWW  "},
        {"   WW     WW   "},
        {"               "},
        {"               "}}
};

const   Majuscule_A     X_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"XX    XX"},
        {" XX  XX "},
        {"  XXXX  "},
        {"   XX   "},
        {"   XX   "},
        {"  XXXX  "},
        {" XX  XX "},
        {"XX    XX"},
        {"        "},
        {"        "}}
};

const   Majuscule_A     Y_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"YY    YY"},
        {" YY  YY "},
        {"  YYYY  "},
        {"   YYY  "},
        {"   YY   "},
        {"  YY    "},
        {" YY     "},
        {"YY      "},
        {"        "},
        {"        "}}
};

const   Majuscule_A     Z_a =   {
    .caractere  =   8,
    .rows       =   {
        {"@ZZZZZZZ"},
        {"      ZZ"},
        {"      ZZ"},
        {"     ZZ "},
        {"    ZZ  "},
        {"   ZZ   "},
        {"  ZZ    "},
        {" ZZ     "},
        {"ZZ      "},
        {"ZZ      "},
        {"ZZ      "},
        {"ZZZZZZZ@"}}
};

const   void    *majuscules_A[26]   =   {&A_a, &B_a, &C_a, &D_a, &E_a, &F_a,
                                        &G_a, &H_a, &I_a, &J_a, &K_a, &L_a,
                                        &M_a, &N_a, &O_a, &P_a, &Q_a, &R_a,
                                        &S_a, &T_a, &U_a, &V_a, &W_a, &X_a,
                                        &Y_a, &Z_a};

