/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:08:26 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/17 15:40:43 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int a, int b);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 0;
	while (argv[1][i] != '\0')
	{
		x = x * 10 + argv[1][i] - '0';
		i++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		y = y * 10 + argv[2][i] - '0';
		i++;
	}
	if (argc == 3)
		rush(x, y);
	else
		ft_putchar('X');
	return (0);
}
