/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filereturn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:55:31 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/29 13:37:21 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int	ft_filelen(char *file)
{
	int		fd;
	int		result;
	int		size;
	char	*buf[1024];

	result = 0;
	size = 1024;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	while (size > 0)
		result += read(fd, buf, size);
	close (fd);
	return (result);
}

char	*ft_returnstr(char *file)
{
	int		fd;
	int		filelen;
	char	*buf;

	filelen = ft_filelen(file);
	buf = (char *)malloc(sizeof(char) * (filelen + 1));
	if (!buf)
		return (0);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	read (fd, buf, filelen);
	close (fd);
	buf[filelen] = '\0';
	return (buf);
}
