/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:04:34 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/29 21:56:57 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *) s1;
	s22 = (unsigned char *) s2;
	i = 0;
	while ((s22[i] != '\0' || s11[i]) != '\0' && n > 0)
	{
		if (s22[i] == s11[i])
		{
			i++;
			n--;
		}
		else if (s22[i] != s11[i])
		{
			return (s11[i] - s22[i]);
		}
	}
	return (0);
}
/*int main(void)
{
	char s2[] = "Hela sdf";
   char s1[] = "Hola sdf";
	printf("%d", ft_strncmp(s1, s2, 2));   
}*/
