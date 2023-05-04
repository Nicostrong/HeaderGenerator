#* **************************************************************************************************** *#
#*                                                                                                      *#
#*  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  *#
#*                                                   :::                                                *#
#*  :::      :::  :::  ::::::::  ::::::::  ::::::::  :::  :::::::    ::::::::  :::      :::  :::::::::  *#
#*  :+:\\    :+:  :+:  :+:       :+:  :+:  :+:  :+:  :+:  :+:  :+:   :+:  :+:  :+:\\    :+:  :+:   :+:  *#
#*  +:+ \\   +:+  +:+  +:+       +:+  +:+  +:+       +:+  +:+   +:+  +:+  +:+  +:+ \\   +:+  +:+   +:+  *#
#*  +#+  \\  +#+  +:+  +:+       +:+  +:+  +:+:+:+:  +:+  +:+ +:+    +:+  +:+  +#+  \\  +#+  +#+   #+#  *#
#*  +#+   \\ +#+  +#+  +#+       +#+  +#+       +#+  +#+  +#+#+#+    +#+  +#+  +#+   \\ +#+  +#+#+#+#+  *#
#*  #+#    \\#+#  #+#  #+#       #+#  #+#  #+#  #+#  #+#  #+#  #+#   #+#  #+#  #+#    \\#+#        #+#  *#
#*  ###      ###  ###  ########  ########  ########  ###  ###   ###  ########  ###      ###        ###  *#
#*                                                                                                ###   *#
#*  ################################################################################################    *#
#*                                                                                                      *#
#*  File: Makefile                                                                                      *#
#*                                                                                                      *#
#*  By: Nicostrong <nicostrong@msn.com>                                                                 *#
#*                                                                                                      *#
#*  Created : 25/04/2023 09:53:03                                                                       *#
#*  Updated : 04/05/2023 11:53:41                                                                       *#
#*                                                                                                      *#
#* **************************************************************************************************** *#

SRC1	=	maj*.c 
NAME1	=	libmaj.a
OBJ1	=	maj*.o

SRC2	=	min*.c
NAME2	=	libmin.a
OBJ2	=	min*.o

SRC3	=	ch*.c
NAME3	=	libch.a
OBJ3	=	ch*.o



FLAGW = -W -Wall -Werror

all: clean maj min ch

maj:
	@echo "Compilation des objets $(SRC1) :"
	gcc -c $(SRC1) $(FLAGW)
	@echo "Création de la bibliothèque $(NAME1) :"
	ar rcs  $(NAME1) $(OBJ1)
	@echo "Optimisation de la bibliothèque $(NAME1) :"
	ranlib $(NAME1)
	/bin/rm -f *.o

min:
	@echo "Compilation des objets $(SRC2) :"
	gcc -c $(SRC2) $(FLAGW)
	@echo "Création de la bibliothèque $(NAME2) :"
	ar rcs  $(NAME2) $(OBJ2)
	@echo "Optimisation de la bibliothèque $(NAME2) :"
	ranlib $(NAME2)
	/bin/rm -f *.o

ch:
	@echo "Compilation des objets $(SRC3) :"
	gcc -c $(SRC3) $(FLAGW)
	@echo "Création de la bibliothèque $(NAME3) :"
	ar rcs  $(NAME3) $(OBJ3)
	@echo "Optimisation de la bibliothèque $(NAME3) :"
	ranlib $(NAME3)
	/bin/rm -f *.o

clean:
	@clear
	/bin/rm -f *.o
	/bin/rm -f *.*~
	/bin/rm -f *.a

