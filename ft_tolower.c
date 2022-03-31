/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:05:52 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/29 21:57:35 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<ctype.h>
#include<stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
/*int main(void)
{
	int c;
	c = 'C';
	printf("%c", tolower(c));
	printf("%c", ft_tolower(c));
}*/
