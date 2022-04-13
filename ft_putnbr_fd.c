/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:26:34 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/13 16:43:56 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd (n * -1, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
	else
	{
		ft_putchar_fd (n + '0', fd);
	}
}
//  int main()
// {
//     const char* filename = "prueba.txt";
//     int fd = open(filename, O_WRONLY);
//     int c = 654434;
//     ft_putnbr_fd(c, fd);
//     return(0);
// }