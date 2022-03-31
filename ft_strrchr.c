/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:57:04 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/30 18:20:40 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *) s + i);
		i--;
	}	
	return (0);
}
/*int main(void)
{
	char  s[] = "abbbbbbbb";
	printf("%s", ft_strrchr(s, 'a'));
	printf("%s", strrchr(s, 'a'));
}*/
