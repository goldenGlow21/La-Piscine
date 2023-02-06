/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokhong <seokhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:40:29 by seokhong          #+#    #+#             */
/*   Updated: 2023/01/24 22:37:58 by seokhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_stdin(void)
{
	char	buf[30];
	int		read_size;

	read_size = read(0, &buf, 4);
	while (read_size > 0)
	{
		write(1, &buf, read_size);
		read_size = read(0, &buf, 4);
	}
}
