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
/*  File: minuscule_a.c                                                                                 */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 15/04/2023 14:02:56                                                                       */
/*  Updated : 15/05/2023 11:43:19                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libmin.h"

/*
 * <summary>
 *  Structure des minuscule en Alpha
 * </summary>
 *
 * <remarks>
 *  Structure composee de deux elements
 *  Minuscule_A :
 *      rows[12][9] => 8 + '\0'
 *  Minuscule_A_i :
 *      rows[12][7] => 6 + '\0'
 *  Minuscule_A_m :
 *      rows[12][13] => 12 + '\0'
 *  Minuscule_A_w :
 *      rows[12][16] => 15 + '\0'
 * </remarks>
 *
 * <param type="int" name="caractere">Nombre de caractere par ligne</param>
 * <param type="char *" name="rows">tableau de pointeur de caractere de 12 lignes et de x caracteres de long</param>
 *
 */

const   Minuscule_A     a_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"  aaaa  "},
        {" aa  aa "},
        {"aa    aa"},
        {" aa  aaa"},
        {"  aaa  a"},
        {"        "},
        {"        "}}
};

const   Minuscule_A     b_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"bb      "},
        {"bb      "},
        {"bb      "},
        {"bb      "},
        {"bbbbbbb "},
        {"bb    bb"},
        {"bb   bb "},
        {"bbbbbb  "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     c_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"  cccccc"},
        {" cc     "},
        {"cc      "},
        {" cc     "},
        {"c cccccc"},
        {"        "},
        {"        "}}
};

const   Minuscule_A     d_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"      dd"},
        {"      dd"},
        {"      dd"},
        {"      dd"},
        {" ddddddd"},
        {"dd    dd"},
        {"dd    dd"},
        {" ddddddd"},
        {"        "},
        {"        "}}
};

const   Minuscule_A     e_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {" eeeeee "},
        {"ee    ee"},
        {"eeeeeeee"},
        {"ee      "},
        {"  eeee  "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     f_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"    ffff"},
        {"   ff   "},
        {"  ff    "},
        {"  ff    "},
        {"ffffff  "},
        {"  ff    "},
        {"  ff    "},
        {"  ff    "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     g_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"  gggg  "},
        {" gg  gg "},
        {"gg    gg"},
        {" gg  gg "},
        {"   ggg  "},
        {" gg  gg "},
        {"gg    gg"},
        {" gg  gg "},
        {"  gggg  "}}
};

const   Minuscule_A     h_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"hh      "},
        {"hh      "},
        {"hh      "},
        {"hh      "},
        {"hhhhhh  "},
        {"hh   hh "},
        {"hh    hh"},
        {"hh    hh"},
        {"        "},
        {"        "}}
};

const   Minuscule_A_i   i_a =   {
    .caractere  =   6,
    .rows       =   {
        {"      "},
        {"      "},
        {"      "},
        {"  ii  "},
        {"      "},
        {"  ii  "},
        {"  ii  "},
        {"  ii  "},
        {"  ii  "},
        {"  ii  "},
        {"      "},
        {"      "}}
};

const   Minuscule_A     j_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"    jj  "},
        {"        "},
        {"  jjjjjj"},
        {"    jj  "},
        {"    jj  "},
        {"jj  jj  "},
        {" jjj    "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     k_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"kk    kk"},
        {"kk   kk "},
        {"kk  kk  "},
        {"kk kk   "},
        {"kkkk    "},
        {"kk  kk  "},
        {"kk   kk "},
        {"kk    kk"},
        {"        "},
        {"        "}}
};

const   Minuscule_A     l_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"llll    "},
        {"  ll    "},
        {"  ll    "},
        {"  ll    "},
        {"  ll    "},
        {"  ll    "},
        {"  ll    "},
        {"  llllll"},
        {"        "},
        {"        "}}
};

const   Minuscule_A_m   m_a =   {
    .caractere  =   12,
    .rows       =   {
        {"            "},
        {"            "},
        {"            "},
        {"            "},
        {"            "},
        {"  mmm  mmm  "},
        {" mm  mm  mm "},
        {"mm   mm   mm"},
        {"mm   mm   mm"},
        {"mm   mm   mm"},
        {"            "},
        {"            "}}
};

const   Minuscule_A     n_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"nn nnn  "},
        {"nnn  nn "},
        {"nn    nn"},
        {"nn    nn"},
        {"nn    nn"},
        {"        "},
        {"        "}}
};

const   Minuscule_A     o_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"  oooo  "},
        {" oo  oo "},
        {"oo    oo"},
        {" oo  oo "},
        {"  oooo  "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     p_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {" pppppp "},
        {"pp    pp"},
        {"pp   pp "},
        {"pppppp  "},
        {"pp      "},
        {"pp      "},
        {"pp      "}}
};

const   Minuscule_A     q_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {" qqqqqq "},
        {"qq    qq"},
        {" qq   qq"},
        {"  qqqqqq"},
        {"      qq"},
        {"      qq"},
        {"      qq"}}
};

const   Minuscule_A     r_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"rr rrrr "},
        {"rrr   rr"},
        {"rr      "},
        {"rr      "},
        {"rr      "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     s_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {" ssssss "},
        {"ss      "},
        {"  ssss  "},
        {"      ss"},
        {" ssssss "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     t_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"   tt   "},
        {"   tt   "},
        {" tttttt "},
        {"   tt   "},
        {"   tt   "},
        {"   tt   "},
        {"   tt   "},
        {"    ttt "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     u_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"uu    uu"},
        {"uu    uu"},
        {"uu    uu"},
        {"uu    uu"},
        {" uuuuu u"},
        {"        "},
        {"        "}}
};

const   Minuscule_A     v_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"vv    vv"},
        {"vv    vv"},
        {" vv  vv "},
        {"  vvvv  "},
        {"   vv   "},
        {"        "},
        {"        "}}
};

const   Minuscule_A_w   w_a =   {
    .caractere  =   15,
    .rows       =   {
        {"               "},
        {"               "},
        {"               "},
        {"               "},
        {"               "},
        {"ww   ww ww   ww"},
        {"ww    www    ww"},
        {" ww  ww ww  ww "},
        {"  wwww  wwwww  "},
        {"   ww     ww   "},
        {"               "},
        {"               "}}
};

const   Minuscule_A     x_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"xx    xx"},
        {" xx  xx "},
        {"   xx   "},
        {" xx  xx "},
        {"xx    xx"},
        {"        "},
        {"        "}}
};

const   Minuscule_A     y_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"yy    yy"},
        {" yy  yy "},
        {"  yyy   "},
        {"  yy    "},
        {" yy     "},
        {"        "},
        {"        "}}
};

const   Minuscule_A     z_a =   {
    .caractere  =   8,
    .rows       =   {
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"        "},
        {"zzzzzzzz"},
        {"     zz "},
        {"   zz   "},
        {" zz     "},
        {"zzzzzzzz"},
        {"        "},
        {"        "}}
};

/*
 * <summary>
 *  Tableau de pointeurs de minuscule_A
 * </summary>
 *
 * <remarks>
 *  Tableau de pointeurs pointant vers les differentes structures de Minuscule_A
 * </remarks>
 *
 */

const   void    *minuscules_A[26]   =   {&a_a, &b_a, &c_a, &d_a, &e_a,
                                        &f_a, &g_a, &h_a, &i_a, &j_a,
                                        &k_a, &l_a, &m_a, &n_a, &o_a,
                                        &p_a, &q_a, &r_a, &s_a, &t_a,
                                        &u_a, &v_a, &w_a, &x_a, &y_a,
                                        &z_a};

