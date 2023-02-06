/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woko <woko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:48:20 by woko              #+#    #+#             */
/*   Updated: 2023/01/17 13:26:12 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		error_check(int x, int y);

void	top(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	bottom(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
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
			ft_putchar('B');
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
			if (j == 0)
				top(x);
			else if (j == y - 1)
				bottom(x);
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
