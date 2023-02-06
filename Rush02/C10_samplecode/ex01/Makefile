#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seokhong <seokhong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 18:34:05 by seokhong          #+#    #+#              #
#    Updated: 2023/01/25 10:38:46 by seokhong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = ft_cat

all: $(TARGET)

$(TARGET): ft.h
	$(CC) $(CFLAGS) *.c -o $(TARGET)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)
