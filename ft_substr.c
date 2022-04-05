/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:44:06 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/05 21:15:45 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstr;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * len + 1);
	if (!newstr || !s)
		return (NULL);
	while (i < len)
	{
		newstr[i] = s[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*int main(void)
{
	char s[] = "Hola";
	int start = 2;
	int len = 3;
	printf("%s", ft_substr(s, start, len));
	return(0);
}*/
