/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filereturn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:55:31 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/29 19:44:22 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int	get_file_len(char *file_name)
{
	int		fd;
	int		read_size;
	int		file_len;
	char	*buff[1024];

	file_len = 0;
	read_size = 1024;
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (-1);
	while (read_size > 0)
	{
		read_size = read(fd, buff, read_size);
		file_len += read_size;
	}
	close(fd);
	return (file_len);
}

char	*file_to_str(char *file_name)
{
	int		fd;
	int		file_len;
	char	*buff;
	
	file_len = get_file_len(file_name);
	buff = (char *) malloc(sizeof(char) * (file_len + 1));
	if (!buff)
		return (0);
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (0);
	read(fd, buff, file_len);
	close(fd);
	buff[file_len] = '\0';
	return (buff);
}
