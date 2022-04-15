/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:18:21 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/14 21:08:09 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"
#include<stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
// int main(void)
// {
// 	char *c = "hola";
// 	char *j = "adios";

// 	t_list	*lst1, *lst2;
// 	lst1 = (t_list *)malloc(sizeof(t_list));
// 	lst2 = (t_list *)malloc(sizeof(t_list));
// 	lst1 -> content = c;
// 	lst1 -> next = lst2;

// 	lst2->content = j;
// 	lst2->next = NULL;
// 	free(lst2);
// 	printf("%d", ft_lstsize(lst1));
// }