/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:28:34 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/12 17:08:06 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putcomb(char arr[]);

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = -1;
	while (++arr[0] <= 7)
	{
		arr[1] = arr[0];
		while (++arr[1] <= 8)
		{
			arr[2] = arr[1];
			while (++arr[2] <= 9)
			{
				ft_putcomb(arr);
				if (arr[0] == 7 && arr[1] == 8 && arr[2] == 9)
					return ;
				write(1, ", ", 2);
			}
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(char arr[])
{
	ft_putchar(arr[0] + '0');
	ft_putchar(arr[1] + '0');
	ft_putchar(arr[2] + '0');
}
