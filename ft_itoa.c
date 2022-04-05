/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:23:30 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/05 22:49:01 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"
#include<stdlib.h>

static size_t    ft_intlen(long nb)
{
    size_t    i;

    i = 0;
    
    if(nb == 0)
    {
        i++;
        return(i);
    }
    if(nb < 0)
    {
        nb = nb * -1;
        i++;
    }
    while(nb > 0)
    {
        nb = nb / 10;
        i++;
    }
    return (i);
}

int ft_itoa(int n)
{
	int len;
	len = ft_intlen(n);
	
	return (len);
}
int main(void)
{
    printf("%d", ft_itoa(-2));
    return(0);
}