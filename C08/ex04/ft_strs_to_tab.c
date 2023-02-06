/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:33:52 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/28 14:31:11 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copystring(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_str_length(str) + 1);
	if (!dest)
		return (0);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*result;

	result = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result[i].size = ft_str_length(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_copystring(av[i]);
		i++;
	}
	result[i].size = 0;
	result[i].str = 0;
	result[i].copy = 0;
	return (result);
}
