/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:06:15 by jonghole          #+#    #+#             */
/*   Updated: 2023/02/01 16:21:09 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;
	int	length;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = max - min;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (-1);
	*range = result;
	i = 0;
	while (i < length)
	{
		result[i] = min + i;
		i++;
	}
	return (length);
}
