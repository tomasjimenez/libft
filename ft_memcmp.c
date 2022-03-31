/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:13:56 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/30 00:59:25 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		if (((unsigned char *) s1)[i] != ((unsigned char *) s2)[i])
		{
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		}
		i++;
	}
	if (i != n)
		return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
	return (0);
}
/*int	main(void)
{
	char *s1 = "hola";
	char *s2 = "hola";
	int n = 3;
	printf("%d",memcmp(s1, s2, n));
	printf("%d",ft_memcmp(s1, s2, n));
}*/
