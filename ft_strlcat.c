/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:22:30 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/31 22:27:28 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	n = 0;
	if (j > dstsize)
	{
		return (i + dstsize);
	}
	else
	{
		while (n < (dstsize - j) - 1)
		{
			dst[j + n] = src[n];
			n++;
		}
		dst[j + i] = '\0';
	}
	return (i + j);
}
/*int main(void)
{
	char src[] = "Hola";
	char dst[4] = "pepe";
	ft_strlcat(dst, src, 2);
	printf("%s", dst);
}*/
