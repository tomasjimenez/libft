/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:16:24 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/14 21:07:13 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
// 	printf("%d", ft_lstlast(()lst1));
// }