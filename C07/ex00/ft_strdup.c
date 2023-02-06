/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:18:02 by jonghole          #+#    #+#             */
/*   Updated: 2023/02/01 21:47:40 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!result)
		return (0);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
