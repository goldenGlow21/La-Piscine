# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seokhong <seokhong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 18:34:09 by seokhong          #+#    #+#              #
#    Updated: 2023/01/28 15:30:00 by jonghole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAG = -Wall -Werror -Wextra
TARGET = ft_display_file

all: ft_display_file

$(TARGET):
	$(CC) $(CFLAG) main.c -o $(TARGET)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

SUFFIXES:
