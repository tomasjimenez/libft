/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:04:15 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/13 16:11:53 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
// int main()
// {
//     const char* filename = "prueba.txt";
//     int fd = open(filename, O_WRONLY);
//     char c[] = "hola";
//     ft_putstr_fd(c, fd);
//     return(0);
// }