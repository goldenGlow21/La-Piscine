/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:45:04 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/16 11:01:40 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	tmp;

	left = 0;
	right = size - 1;
	while (left < (size / 2))
	{
		tmp = tab[left];
		tab[left] = tab[right];
		tab[right] = tmp;
		left++;
		right--;
	}
}
