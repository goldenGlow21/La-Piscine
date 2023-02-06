/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokhong <seokhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:30:48 by seokhong          #+#    #+#             */
/*   Updated: 2023/01/27 19:42:18 by seokhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_files(int argc, char *argv[])
{
	int		index;
	int		fd;
	char	*buff[30];

	index = 1;
	while (index < argc)
	{
		fd = open(argv[index], O_RDWR);
		if (fd == -1)
		{
			ft_puterror(basename(argv[0]));
			ft_puterror(": ");
			ft_puterror(argv[index]);
			ft_puterror(": ");
			ft_puterror(strerror(errno));
			ft_puterror("\n");
		}
		else
		{
			while (read(fd, &buff, 1) > 0)
				write(1, buff, 1);
			close(fd);
		}
		index++;
	}
}
