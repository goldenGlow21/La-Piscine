/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:51:29 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/29 13:11:11 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = destlen;
	j = 0;
	while (src[j] != '\0' && (j + destlen + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (destlen < size)
		return (destlen + srclen);
	else
		return (srclen + size);
}
