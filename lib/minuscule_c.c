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
/*  File: minuscule_c.c                                                                                 */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 15/04/2023 14:02:56                                                                       */
/*  Updated : 12/05/2023 11:25:43                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libmin.h"

const   Minuscule_C     a_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"  +:+:  "},
        {" ++  ++ "},
        {"+#    +#"},
        {" #+  #+#"},
        {"  ###  #"},
        {"        "},
        {"        "}}
};

const   Minuscule_C     b_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::      "},
        {"::      "},
        {":+      "},
        {"+:      "},
        {"+++++++ "},
        {"+#    +#"},
        {"#+    #+"},
        {"######  "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     c_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"  +:+:+:"},
        {" ++     "},
        {"+#      "},
        {" #+     "},
        {"# ######"},
        {"        "},
        {"        "}}
};

const   Minuscule_C     d_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"      ::"},
        {"      ::"},
        {"      :+"},
        {"      +:"},
        {" +++++++"},
        {"+#    +#"},
        {"#+    #+"},
        {" #######"},
        {"        "},
        {"        "}}
};

const   Minuscule_C     e_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {" +:+:+: "},
        {"++    ++"},
        {"+#+#+#+#"},
        {"#+      "},
        {"  ####  "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     f_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"    ::::"},
        {"   ::   "},
        {"  :+    "},
        {"  +:    "},
        {"++++++  "},
        {"  +#    "},
        {"  #+    "},
        {"  ##    "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     g_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"  ::::  "},
        {" :+  :+ "},
        {"+:    +:"},
        {" ++  ++ "},
        {"   +#+  "},
        {" #+  #+ "},
        {"##    ##"},
        {" ##  ## "},
        {"  ###   "}}
};

const   Minuscule_C     h_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::      "},
        {"::      "},
        {":+      "},
        {"+:      "},
        {"++++++  "},
        {"+#   +# "},
        {"#+    #+"},
        {"##    ##"},
        {"        "},
        {"        "}}
};

const   Minuscule_C_i   i_c =   {
    .caractere  =   6,
    .rows       =   {
        {"      "},
        {"      "},
        {"      "},
        {"  ::  "},
        {"      "},
        {"  +:  "},
        {"  ++  "},
        {"  +#  "},
        {"  #+  "},
        {"  ##  "},
        {"      "},
        {"      "}}
};

const   Minuscule_C     j_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"    ::  "},
        {"        "},
        {"  +:+:+:"},
        {"    ++  "},
        {"    +#  "},
        {"#+  #+  "},
        {" ###    "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     k_c =   {
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

const   Minuscule_C     l_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"::::    "},
        {"  ::    "},
        {"  :+    "},
        {"  +:    "},
        {"  ++    "},
        {"  +#    "},
        {"  #+    "},
        {"  ######"},
        {"        "},
        {"        "}}
};

const   Minuscule_C_m   m_c =   {
    .caractere  =   12,
    .rows       =   {
        {"            "},
        {"            "},
        {"            "},
        {"            "},
        {"            "},
        {"  +:+  +:+  "},
        {" ++  ++  ++ "},
        {"+#   +#   +#"},
        {"#+   #+   #+"},
        {"##   ##   ##"},   
        {"            "},
        {"            "}}
};

const   Minuscule_C     n_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"+: +:+  "},
        {"+++   ++"},
        {"+#    +#"},
        {"#+    #+"},
        {"#+    #+"},
        {"        "},
        {"        "}}
};

const   Minuscule_C     o_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"  +:+:  "},
        {" ++  ++ "},
        {"+#    +#"},
        {" #+  #+ "},
        {"  ####  "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     p_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {" +:+:+: "},
        {"++    ++"},
        {"+#   +# "},
        {"#+#+#+  "},
        {"##      "},
        {"##      "},
        {"##      "}}
};

const   Minuscule_C     q_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {" +:+:+: "},
        {"++    ++"},
        {" +#   +#"},
        {"  #+#+#+"},
        {"      ##"},
        {"      ##"},
        {"      ##"}}
};

const   Minuscule_C     r_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"+: +:+: "},
        {"+++   ++"},
        {"+#      "},
        {"#+      "},
        {"##      "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     s_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {" +:+:+: "},
        {"++      "},
        {"  +#+#  "},
        {"      #+"},
        {" ###### "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     t_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"   ::   "},
        {"   ::   "},
        {" :+:+:+ "},
        {"   +:   "},
        {"   ++   "},
        {"   +#   "},
        {"   #+   "},
        {"    ### "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     u_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"+:    +:"},
        {"++    ++"},
        {"+#    +#"},
        {"#+    #+"},
        {" ##### #"},
        {"        "},
        {"        "}}
};

const   Minuscule_C     v_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"+:    +:"},
        {"++    ++"},
        {" +#  +# "},
        {"  #+#+  "},
        {"   ##   "},
        {"        "},
        {"        "}}
};

const   Minuscule_C_w   w_c =   {
    .caractere  =   15,
    .rows       =   {
        {"               "},
        {"               "},
        {"               "},
        {"               "},
        {"               "},
        {"+:   +: +:   +:"},
        {"++    +++    ++"},
        {" +#  +# +#  +# "},
        {"  #+#+   #+#+  "},
        {"   ##     ##   "},
        {"               "},
        {"               "}}
};

const   Minuscule_C     x_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"+:    +:"},
        {" ++  ++ "},
        {"   #+   "},
        {" #+  #+ "},
        {"##    ##"},
        {"        "},
        {"        "}}
};

const   Minuscule_C     y_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"+:    +:"},
        {" ++ ++  "},
        {"  +#+   "},
        {"  #+    "},
        {" ##     "},
        {"        "},
        {"        "}}
};

const   Minuscule_C     z_c =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"+:+:+:+:"},
        {"     ++ "},
        {"   +#   "},
        {" #+     "},
        {"########"},
        {"        "},
        {"        "}}
};

const   void    *minuscules_C[26]   =   {&a_c, &b_c, &c_c, &d_c, &e_c,
                                        &f_c, &g_c, &h_c, &i_c, &j_c,
                                        &k_c, &l_c, &m_c, &n_c, &o_c,
                                        &p_c, &q_c, &r_c, &s_c, &t_c,
                                        &u_c, &v_c, &w_c, &x_c, &y_c,
                                        &z_c};

