/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:39:56 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/29 23:12:52 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	char	*i;

	n = 0;
	i = malloc (count * size);
	if (!i)
		return (NULL);
	while (n < size * count)
	{
		i[n] = 0;
		n++;
	}
	return (i);
}
/*int main(void)
{
	char *s;
	s = ft_calloc(8, sizeof(int));
	return(0);
}*/
