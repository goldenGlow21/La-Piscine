/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:48:47 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/22 18:57:17 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc;
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
	return (0);
}
