/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:40:22 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/13 15:57:09 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// int main()
// {
//     const char* filename = "prueba.txt";
//     int fd = open(filename, O_WRONLY);
//     char c = 'c';
//     ft_putchar_fd(c, fd);
//     return(0);
// }