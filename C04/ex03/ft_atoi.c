/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:59:50 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/31 16:36:52 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	result = 0;
	while (*str >= 48 && *str <= 57)
	{
		result *= 10;
		result += (*str - 48);
		str++;
	}
	return (result * sign);
}
