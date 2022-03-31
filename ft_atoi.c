/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:44:22 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/30 02:39:01 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int				i;
	int				j;
	unsigned int	res;

	res = 0;
	i = 0;
	j = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		j *= -1;
	if (str[i] == '-' || str[i] == '+')
		str++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res > 2147483647 && j == 1)
		return (-1);
	if (res > 2147483648 && j == -1)
		return (0);
	return (res * j);
}
/*int main(void)
{
	
}*/
