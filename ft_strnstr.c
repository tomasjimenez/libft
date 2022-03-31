/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:17:30 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/30 17:43:30 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j]
			&& needle[j] == haystack[i + j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		if (!haystack[i + j] || i + j == len)
			return ((char *)(void *)0);
		i++;
	}
	return ((char *)(void *)0);
}
/*int main(void)
{
	char haystack[10] = "que tal";
	char needle[10] = "e";
	int n = 20;

	//printf("%s", strnstr(haystack, needle, n));
	printf("%s", ft_strnstr(haystack, needle, n));
}*/
