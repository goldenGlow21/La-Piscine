/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:11:58 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/29 12:06:20 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	while (a < (size - 1))
	{
		b = 0;
		while (b < ((size - a) - 1))
		{
			if (tab[b] > tab[b + 1])
			{
				tmp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = tmp;
			}
			b++;
		}
		a++;
	}
}
