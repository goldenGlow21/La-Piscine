/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:21:46 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/29 12:03:41 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	array_output(int	*arr, int n)
{
	int	i;
	int	flag;

	i = 1;
	flag = 1;
	while (i < n)
	{
		if (arr[i - 1] >= arr[i])
			flag = 0;
		i++;
	}
	if (flag == 1)
	{
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
		if (arr[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	arr[10];

	i = 0;
	while (i < n)
		arr[i++] = 0;
	while (arr[0] <= (10 - n))
	{
		array_output(arr, n);
		arr[n - 1]++;
		i = n - 1;
		while (i > 0)
		{
			if (arr[i] > 9)
			{
				arr[i - 1]++;
				arr[i] = 0;
			}
			i--;
		}
	}
}
