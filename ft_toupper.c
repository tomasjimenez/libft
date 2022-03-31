/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 00:50:14 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/29 21:57:55 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<ctype.h>
#include<stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
/*int main(void)
{
	int c;
	c = 'a';
	printf("%c", toupper(c));
	printf("%c", ft_toupper(c));
}*/
