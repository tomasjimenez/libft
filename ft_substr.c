/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:44:06 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/31 17:02:42 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*tmp;
	size_t	i;

	ptr = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	tmp = ptr;
	if (!s)
		return (NULL);
	if (!ptr)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (i < len)
	{
		tmp[i++] = s[start++];
	}
	tmp[i] = '\0';
	return (tmp);
}
/*int main(void)
{
    char s[] = "Hola";
    int start = 2;
    int len = 3;
    printf("%s", ft_substr(s, start, len));
    return(0);
}*/
