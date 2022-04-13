/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:57:11 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/13 14:58:19 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"
#include<stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	i = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// char suma (unsigned int a , char b )
// {
//     return a + b ;
// }

// int main(void)
// {
// 	char s[] = "1234";
// 	printf("%s", ft_strmapi(s, &suma));
// 	return(0);
// }