/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunsecho <eunsecho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:42:29 by eunsecho          #+#    #+#             */
/*   Updated: 2023/01/14 16:17:33 by eunsecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		error_check(int x, int y);

void	top_bottom(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	middle(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int	j;

	if (error_check(x, y) == 1)
		ft_putchar('X');
	else
	{
		j = 0;
		while (j < y)
		{
			if (j == 0 || j == y - 1)
				top_bottom(x);
			else
				middle(x);
			ft_putchar('\n');
			j++;
		}
	}
}

int	error_check(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (1);
	else
		return (2);
}
