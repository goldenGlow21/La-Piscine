/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokhong <seokhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:12:27 by seokhong          #+#    #+#             */
/*   Updated: 2023/01/25 10:58:23 by seokhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>

void	ft_stdin(void);
void	ft_files(int argc, char *argv[]);
void	ft_puterror(char *str);

#endif
