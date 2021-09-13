# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 15:40:34 by alaamimi          #+#    #+#              #
#    Updated: 2021/09/13 15:47:08 by alaamimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

exec : test_array.o tab_manipulation.o
	gcc test_array.o tab_manipulation.o -o exec
tab_manipulation.o : tab_manipulation.c intarray.h
	gcc -c tab_manipulation.c
test_array.o : test_array.c intarray.h
	gcc -c test_array.c
