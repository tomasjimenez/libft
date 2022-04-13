/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:44:06 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/07 19:24:24 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		s_len;
	size_t		end;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	str = (char *)malloc(sizeof(char) * (end + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, end + 1);
	return (str);
}
/*int main(void)
{
	char s[] = "Hola";
	int start = 2;
	int len = 3;
	printf("%s", ft_substr(s, start, len));
	return(0);
}*/
