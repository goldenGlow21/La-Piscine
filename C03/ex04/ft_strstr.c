/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:34:26 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/19 11:33:37 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
