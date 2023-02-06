/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:07:59 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/30 16:48:14 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_ten_queens_puzzle_test(int table[10], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos)
	{
		if (num == table[i] || i + table[i] == pos + num
			|| i - table[i] == pos - num)
			return (0);
	}
	return (1);
}

void	ft_ten_queens_puzzle_recur(int table[10], int *res, int pos)
{
	int	i;
	int	index;

	if (pos == 10)
	{
		*res += 1;
		index = -1;
		while (++index < 10)
			ft_putchar(table[index] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (ft_ten_queens_puzzle_test(table, pos, i))
			{
				table[pos] = i;
				ft_ten_queens_puzzle_recur(table, res, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		table[10];
	int		i;
	int		res;

	i = -1;
	while (++i < 10)
		table[i] = -1;
	res = 0;
	ft_ten_queens_puzzle_recur(table, &res, 0);
	return (res);
}
