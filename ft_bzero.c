/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:18:25 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/23 21:48:50 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include<stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*int main(void)
{
	char s[] = "Hola \0 pepe";
	ft_bzero(s, 2);
	for (int i = 2; i < 9; i++)
		printf("%c", s[i]);	
	//printf("\n");
	//bzero(s, 2);
	//printf("%s", s);
	//memset(s,'$', 2);
	//printf("%s", s);
	return(0);
}*/
