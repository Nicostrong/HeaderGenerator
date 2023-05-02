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
/*  File: functions.h                                                                                   */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 15/04/2023 13:34:32                                                                       */
/*  Updated : 01/05/2023 15:18:24                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#ifndef __H_FUNCTIONS_H__
# define __H_FUNCTIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libmin.h"
#include "libmaj.h"
#include "libch.h"

void    ft_putchar              (char   c);

void    ft_putstr               (char   *str);

void    ft_strcpy               (char   *dest, char *scr);

int     cal_len_line            (char   *label);

void    add_char                (char   **ban, int  line, int   position, char  c);

void    cal_len_ban             (char   *label, int len_label, int  *len_header);
        
void    banniere                (char   **ban, int  *len_header);

void    creat_ban               (char   *label, char    **ban, int  len_label, int  *len_header);

void    show_ban                (char   **ban);

void    test_memorie            (void   *var, char  *var_name);

#endif

