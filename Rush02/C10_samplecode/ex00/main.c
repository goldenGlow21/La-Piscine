/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokhong <seokhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:00:48 by seokhong          #+#    #+#             */
/*   Updated: 2023/01/28 17:18:07 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		fd;
	char	buff[1024];
	int		read_size;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Cannot read file.\n", 18);
			return (0);
		}
		read_size = read(fd, buff, 4);
		while (read_size > 0)
		{
			write(1, buff, read_size);
			read_size = read(fd, buff, 4);
		}
		close(fd);
	}
	return (0);
}
