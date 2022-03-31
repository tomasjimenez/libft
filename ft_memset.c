/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:29:48 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/31 22:39:35 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char )c;
		i++;
	}
	return (b);
}
/*int main(void)
{
	char b[] = "Hola pepe";
	printf("%s", ft_memset(b, 'a', 2));
   	//printf("%s", memset(b, 'a', 2));
	return(0);	
}*/