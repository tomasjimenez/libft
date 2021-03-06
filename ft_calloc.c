/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:39:56 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/13 16:36:31 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*i;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	i = (char *)malloc(size * count);
	if (!i)
		return (0);
	ft_bzero (i, count * size);
	return (i);
}
/*int main(void)
{
	char *s;
	s = ft_calloc(8, sizeof(int));
	return(0);
}*/
