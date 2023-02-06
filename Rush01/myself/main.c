/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:23:11 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/21 16:12:43 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	*ft_rush(*int n);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	str[17];

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		str[j] = argv[1][i];
		i++;
		i++;
		j++;
	}
	if (argc != 2)
		ft_putstr("Wrong Argument Input\n");
	ft_rush(str);
	return (0);
}
