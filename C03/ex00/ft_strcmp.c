/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghole <jonghole@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:58:28 by jonghole          #+#    #+#             */
/*   Updated: 2023/01/21 20:49:18 by jonghole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int main(void)
{
	char *str1 = "asdf";
	char *str2 = "dddd";

	printf("%d\n",strcmp(str1, str2));
	
	printf("%d\n",strcmp("asdf", "dddd"));
	printf("%d\n",strcmp(str1, "dddd"));


	printf("%d\n",strcmp("asdf", str2));
	printf("%d\n",strcmp(str1, str2));

}
