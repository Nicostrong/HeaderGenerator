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
/*  File: fx_test.c                                                                                     */
/*                                                                                                      */
/*  By: Nicostrong <nicostrong@msn.com>                                                                 */
/*                                                                                                      */
/*  Created : 09/05/2023 09:53:08                                                                       */
/*  Updated : 12/07/2023 10:55:12                                                                       */
/*                                                                                                      */
/* **************************************************************************************************** */

#include "libfx.h"

/*
 * <summary>
 *  void    test_memorie 
 * </summary>
 *
 * <remarks>
 *  Verifie si l'allocution de memoire a fonctionne
 * </remarks>
 *
 * <param type="void *" name="var">adresse du pointeur</param>
 * <param type="char *" name="var_name">nom du pointeur</param>
 * <param type="int *" name="error">numero de l'erreur</param>
 *
 * <subfunction>
 *  printf
 *  free
 * </subfunction>
 *
 */

void    test_memorie    (void *var, char *var_name, int *error)
{
        if(!var)
        {
            printf("ERROR : ERROR_ALLOC_MEM\n");
            printf("Erreur d'allocution de la memoire pour la variable %s", var_name);
            free(var);
            *error  =    ERROR_ALLOC_MEM;
        }
}

/*
 * <summary>
 *  void    test_label
 * </summary>
 *
 * <remarks>
 *  Verifie si le label est constitue de caracteres valide
 * </remarks>
 *
 * <param type="char *" name="label">label de la banniere</param>
 * <param type="int *" name="error">numero de l'erreur</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    test_label      (char *label, int *error)
{
        for(int i = 0; label[i] != '\0'; i++)
        {
            if(!(((label[i] >= 'a') && (label[i] <= 'z')) ||
                 ((label[i] >= 'A') && (label[i] <= 'Z')) ||
                 ((label[i] >= '0') && (label[i] <= '9')) ||
                 (label[i] == ' ')))
            {
                printf("ERROR : ERROR_CHAR_LABEL\n");
                printf("Caractère non pris en charge dans le label => %c\n", label[i]);
                *error  =   ERROR_CHAR_LABEL;
            }
        }
}

/*
 * <summary>
 *  void    test_arg
 * </summary>
 *
 * <remarks>
 *  Verifie le nombre d'argument et la conformite du deuxieme argument
 * </remarks>
 *
 * <param type="int *" name="argc">nombre d'argument</param>
 * <param type="char **" name="argv">tableau d'arguments</param>
 * <param type="int *" name="error">numero de l'erreur</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    test_arg        (int argc, char **argv, int *error)
{
        if(ft_strcmp(argv[1], "-help"))
        {
            help();
            *error  =   ERROR_HELP;
        }
        else if(argc < 4)
        {
            printf("ERROR : ERROR_NB_ARG\n");
            printf("Usage minimum : %s <label> || \"la bel\" <style = '-c' for ASCII Art or '-a' for Alphabetic> <filename>\n", argv[0]);
            printf("For help : %s -help\n", argv[0]);
            *error  =   ERROR_NB_ARG;
        }
        else if(!ft_strcmp(argv[2],"-c") && !ft_strcmp(argv[2], "-a"))
        {
            printf("ERROR : ERROR_ARG_2\n");
            printf      ("Usage for param 2 <style> : write '-c' for ASCII Art or '-a' for Alphabetic\n");
            *error  =   ERROR_ARG_2;
        }
}

/*
 * <summary>
 *  void    test_len_ban
 * </summary>
 *
 * <remarks>
 *  Verifie si la banniere ne depasse pas la longueur maxi avant la creation de celle-ci
 * </remarks>
 *
 * <param type="int *" name="len_header">nombre de caractere du header</param>
 * <param type="int *" name="error">numero de l'erreur</param>
 *
 * <subfunction>
 *  printf
 * </subfunction>
 *
 */

void    test_len_ban    (int *len_header, int *error)
{
        if(*len_header > LEN_MAX_HEADER)
        {
            printf("ERROR : ERROR_LEN_BAN\n");
            printf("La banniere est limite a 120 caracteres\n");
            *error  =   ERROR_LEN_BAN;
        }
}

/*
 * <summary>
 *  void    free_memorie 
 * </summary>
 *
 * <remarks>
 *  libere la memoire des pointeurs initialises
 * </remarks>
 *
 * <param type="int" name="count">nombre de pointeur</param>
 * <param type="" name="...">liste des popinteurs</param>
 *
 * <subfunction>
 *  va_list
 *  va_start
 *  free
 *  va_end
 * </subfunction>
 *
 */

void    free_memorie    (int count, ...)
{
        va_list args;
        va_start(args, count);

        for(int i = 0; i < count; i++)
        {
            void    *ptr = va_arg(args, void *);
            free    (ptr);
        }

        va_end(args);
}

