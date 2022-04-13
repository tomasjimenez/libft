/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:23:30 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/13 16:42:04 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"
#include<stdlib.h>

static size_t	ft_intsize(long nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
	{
		i++;
		return (i);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_intsize(nb);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (0);
	ptr[len--] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		ptr[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (ptr);
}
/*int main(void)
{
    printf("%s", ft_itoa(265));
    return(0);
}*/