/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:41:40 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/29 13:22:57 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483647)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		ft_putstr("\n");
		ft_putnbr(par[index].size);
		ft_putstr("\n");
		ft_putstr(par[index].copy);
		ft_putstr("\n");
		index++;
	}
}
