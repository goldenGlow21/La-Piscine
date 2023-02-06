# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 13:05:31 by jonghole          #+#    #+#              #
#    Updated: 2023/02/01 21:17:03 by jonghole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete
