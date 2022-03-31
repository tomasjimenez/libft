/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:34:52 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/29 22:05:59 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	find;

	find = c;
	while (n > 0 && *((unsigned char *) s) != find)
	{
			n--;
			s++;
	}	
	if (n == 0)
		return (0);
	return ((void *) s);
}
/*int main(void)
{
	char s[] = "hola pepe";
   	int c = 111;
	//ft_memchr(s, c, 2);
	printf("%s",ft_memchr(s, c, 1));
}*/
