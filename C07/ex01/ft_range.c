/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:11:04 by jonghole          #+#    #+#             */
/*   Updated: 2023/02/01 21:23:58 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			i;
	int			*result;
	long long	length;

	if (min >= max)
		return (0);
	else
	{
		i = 0;
		length = max - min;
		result = (int *)malloc(sizeof(int) * length);
		if (!result)
			return (0);
		while (min < max)
		{
			result[i] = min;
			min++;
			i++;
		}
	}
	return (result);
}
