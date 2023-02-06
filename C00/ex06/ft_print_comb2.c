/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:42:29 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/12 17:41:10 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	ft_return_digit(char c, int n);

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_return_digit(char c, int n)
{
	char	result;

	if (n == 1)
		result = c / 10 + '0';
	else
		result = c % 10 + '0';
	return (result);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ft_return_digit(a, 1));
			ft_putchar(ft_return_digit(a, 2));
			ft_putchar(' ');
			ft_putchar(ft_return_digit(b, 1));
			ft_putchar(ft_return_digit(b, 2));
			if (a == 98 && b == 99)
				return ;
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
