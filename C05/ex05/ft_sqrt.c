/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:13:29 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/30 15:52:15 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;

	i = 0;
	while (i * i <= nb)
	{
		if (nb == i * i)
			return ((int)i);
		i++;
	}
	return (0);
}
