/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:11:38 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/14 19:54:32 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static size_t	ft_numstring(const char *s, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free_matrix(const char **matrix, size_t len_matrix)
{
	while (len_matrix--)
		free((void *)matrix[len_matrix]);
	free(matrix);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	size_t	len;
	size_t	i;
	size_t	sl;

	i = 0;
	sl = 0;
	len = ft_numstring(s, c);
	matrix = (char **)malloc(sizeof(char *) * (len + 1));
	if (!matrix)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		sl = ft_numchar((const char *)s, c);
		matrix[i] = (char *)malloc(sizeof(char) * sl + 1);
		if (!matrix[i])
			return (ft_free_matrix((const char **)matrix, len));
		ft_strlcpy(matrix[i], s, sl + 1);
		s = (ft_strchr(s, (int)c));
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}
/*int wordstrlen(const char *s,char c)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] != c && s[i] != '\0')
            j++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    return (j);
}

char    **ft_split(char const *s, char c)
{
    int i;
    i = 0;
    int start;

    int sizewords = wordstrlen(s, c);
    char **ptr = (char **)malloc(sizeof(char *) * sizewords);
    while(s[i] != '\0')
    {
         while (s[i] == c)
            i++;
        start = i;
        while (s[i] != c && s[i] != '\0')
            i++;
        *ptr = ft_substr(s, start, (i - start));
        *ptr++;
    }
    return(ptr);
}*/
// int main(void)
// {
//     char s[] = "hola pepe luis jose";
//     char c = ' ';
//     size_t i;
//     char    **strsplit = ft_split(s, c);

//     i = 0;
//     while (i < ft_numstring(s, c))
//     {
//         printf("%s\n", strsplit[i]);
//         i++; 
//     }        
// 	system("leaks a.out");
// 	return(0);
// }