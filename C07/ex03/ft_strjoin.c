/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:06:03 by jonghole          #+#    #+#             */
/*   Updated: 2023/02/01 21:15:56 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *srcs)
{
	int	i;

	i = 0;
	while (srcs[i])
	{
		dest[i] = srcs[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		total += ft_strlen(sep);
		i++;
	}
	total -= ft_strlen(sep);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	char	*save;

	if (size == 0)
		return ((char *)malloc(1));
	result = (char *)malloc((total_len(size, strs, sep) + 1) * 1);
	if (!result)
		return (0);
	save = result;
	i = 0;
	while (i < size)
	{
		ft_strcpy(result, strs[i]);
		result += ft_strlen(strs[i]);
		if (i < (size - 1))
		{
			ft_strcpy(result, sep);
			result += ft_strlen(sep);
		}
		i++;
	}
	*result = '\0';
	return (save);
}
