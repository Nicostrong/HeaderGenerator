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
/*  File: majuscule_c.c                                                                                 */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 15/04/2023 14:14:16                                                                       */
/*  Updated : 04/05/2023 11:48:54                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libmaj.h"

// le caractere @ indique la prolongation du caractere suivant ou precedent 

const   Majuscule_C     A_c =   {
    .caractere  =   8,
    .rows   =   {
        {"        "},
        {"        "},
        {"   ::   "},
        {"  ::::  "},
        {" :+  :+ "},
        {"+:    +:"},
        {"++++++++"},
        {"+#    +#"},
        {"#+    #+"},
        {"##    ##"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     B_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::::::"},
        {"::    ::"},
        {":+    :+"},
        {"+:+:+:+ "},
        {"++    ++"},
        {"+#    +#"},
        {"#+    #+"},
        {"########"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     C_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::::::"},
        {"::      "},
        {":+      "},
        {"+:      "},
        {"++      "},
        {"+#      "},
        {"#+      "},
        {"########"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     D_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::::: "},
        {"::    ::"},
        {":+    :+"},
        {"+:    +:"},
        {"++    ++"},
        {"+#    +#"},
        {"#+    #+"},
        {"####### "},
        {"        "},
        {"        "}}
};

const   Majuscule_C     E_c =   {
    .caractere  =   8,
    .rows       =   {
        {":::::::@"},
        {"::      "},
        {"::      "},
        {"::      "},
        {":+      "},
        {"+:+:+   "},
        {"++      "},
        {"+#      "},
        {"#+      "},
        {"########"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     F_c =   {
    .caractere  =   8,
    .rows       =   {
        {":::::::@"},
        {"::      "},
        {"::      "},
        {"::      "},
        {":+      "},
        {"+:+:+   "},
        {"++      "},
        {"+#      "},
        {"#+      "},
        {"##      "},
        {"        "},
        {"        "}}
};

const   Majuscule_C     G_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {" :::::: "},
        {"::    ::"},
        {":+    :+"},
        {"+:    +:"},
        {"++++++++"},
        {"      +#"},
        {"      #+"},
        {"      ##"},
        {"      ##"},
        {"@###### "}}
};

const   Majuscule_C     H_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::    ::"},
        {"::    ::"},
        {":+    :+"},
        {"+:    +:"},
        {"++++++++"},
        {"+#    +#"},
        {"#+    #+"},
        {"##    ##"},
        {"        "},
        {"        "}}
};

const   Majuscule_C_i   I_c =   {
    .caractere  =   6,
    .rows       =   {
        {"      "},
        {"      "},
        {"  ::  "},
        {"  ::  "},
        {"  :+  "},
        {"  +:  "},
        {"  ++  "},
        {"  +#  "},
        {"  #+  "},
        {"  ##  "},
        {"      "},
        {"      "}}
};

const   Majuscule_C     J_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::::::"},
        {"    ::  "},
        {"    :+  "},
        {"    +:  "},
        {"    ++  "},
        {"    +#  "},
        {"    #+  "},
        {"    ##  "},
        {"    ##  "},
        {"@#####  "}}
};

const   Majuscule_C     K_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::    ::"},
        {"::   :: "},
        {":+  :+  "},
        {"+: +:   "},
        {"++++    "},
        {"+#  +#  "},
        {"#+   #+ "},
        {"##    ##"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     L_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::      "},
        {"::      "},
        {":+      "},
        {"+:      "},
        {"++      "},
        {"+#      "},
        {"#+      "},
        {"##      "},
        {"##      "},
        {"#######@"}}
};

const   Majuscule_C_m   M_c =   {
    .caractere  =   12,
    .rows       =   {
        {"            "},
        {"            "},
        {"::        ::"},
        {":::      :::"},
        {":+ :+  :+ :+"},
        {"+:  +:+:  +:"},
        {"++   ++   ++"},
        {"+#        +#"},
        {"#+        #+"},
        {"##        ##"},
        {"            "},
        {"            "}}
};

const   Majuscule_C     N_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::    ::"},
        {":::   ::"},
        {":+ :  :+"},
        {"+: +  +:"},
        {"++  + ++"},
        {"+#  + +#"},
        {"#+   #+#"},
        {"##    ##"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     O_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::::::"},
        {"::    ::"},
        {":+    :+"},
        {"+:    +:"},
        {"++    ++"},
        {"+#    +#"},
        {"#+    #+"},
        {"########"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     P_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::::::"},
        {"::    ::"},
        {":+    :+"},
        {"+:    +:"},
        {"++++++++"},
        {"+#      "},
        {"#+      "},
        {"##      "},
        {"        "},
        {"        "}}
};

const   Majuscule_C     Q_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::::::"},
        {"::    ::"},
        {":+    :+"},
        {"+:    +:"},
        {"++++++++"},
        {"      +#"},
        {"      #+"},
        {"      ##"},
        {"        "},
        {"        "}}
};
        
const   Majuscule_C     R_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::::::"},
        {"::    ::"},
        {":+    :+"},
        {"+:+:+:+:"},
        {"++ ++   "},
        {"+#  +#  "},
        {"#+   #+ "},
        {"##    ##"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     S_c =   {
    .caractere  =   8,
    .rows       =   {
        {" ::::::@"},
        {"::      "},
        {"::      "},
        {"::      "},
        {":+      "},
        {"+:      "},
        {" ++++++ "},
        {"      +#"},
        {"      #+"},
        {"      ##"},
        {"      ##"},
        {"@###### "}}
};

const   Majuscule_C     T_c =   {
    .caractere  =   8,
    .rows       =   {
        {"@::::::@"},
        {"   ::   "},
        {"   ::   "},
        {"   ::   "},
        {"   :+   "},
        {"   +:   "},
        {"   ++   "},
        {"   +#   "},
        {"   #+   "},
        {"   ##   "},
        {"        "},
        {"        "}}
};

const   Majuscule_C     U_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::    ::"},
        {"::    ::"},
        {":+    :+"},
        {"+:    +:"},
        {"++    ++"},
        {"+#    +#"},
        {"#+    #+"},
        {"########"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     V_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::    ::"},
        {"::    ::"},
        {":+    :+"},
        {"+:    +:"},
        {"++    ++"},
        {" +#  +# "},
        {"  #+#+  "},
        {"   ##   "},
        {"        "},
        {"        "}}
};
 
const   Majuscule_C_w   W_c =   {
    .caractere  =   15,
    .rows       =   {
        {"               "},
        {"               "},
        {"::  ::   ::  ::"},
        {"::   :: ::   ::"},
        {":+    :+:    :+"},
        {"+:    +:+    +:"},
        {"++    +++    ++"},
        {" +#  +# +#  +# "},
        {"  #+#+   #+#+  "},
        {"   ##     ##   "},
        {"               "},
        {"               "}}
};

const   Majuscule_C     X_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::    ::"},
        {" ::  :: "},
        {"  :+:+  "},
        {"   +:   "},
        {"   ++   "},
        {"  +#+#  "},
        {" #+  #+ "},
        {"##    ##"},
        {"        "},
        {"        "}}
};

const   Majuscule_C     Y_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::    ::"},
        {" ::  :: "},
        {"  :+:+  "},
        {"   +:+  "},
        {"   ++   "},
        {"  +#    "},
        {" #+     "},
        {"##      "},
        {"        "},
        {"        "}}
};

const   Majuscule_C     Z_c =   {
    .caractere  =   8,
    .rows       =   {
        {"@:::::::"},
        {"      ::"},
        {"      ::"},
        {"     :+ "},
        {"    +:  "},
        {"   ++   "},
        {"  +#    "},
        {" #+     "},
        {"##      "},
        {"##      "},
        {"##      "},
        {"#######@"}}
};

const   void    *majuscules_C[26]   =   {&A_c, &B_c, &C_c, &D_c, &E_c, &F_c,
                                        &G_c, &H_c, &I_c, &J_c, &K_c, &L_c,
                                        &M_c, &N_c, &O_c, &P_c, &Q_c, &R_c,
                                        &S_c, &T_c, &U_c, &V_c, &W_c, &X_c,
                                        &Y_c, &Z_c};

