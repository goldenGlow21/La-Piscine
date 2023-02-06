/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:26:37 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/29 13:07:34 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_change_hexa(unsigned char word)
{
	char	*hexbase;

	hexbase = "0123456789abcdef";
	ft_putchar(hexbase[word / 16]);
	ft_putchar(hexbase[word % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	word;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			ft_putchar('\\');
			word = str[i];
			ft_change_hexa(word);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
