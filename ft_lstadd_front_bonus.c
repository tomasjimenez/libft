/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:31:00 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/14 21:05:27 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new -> next = *lst;
	*lst = new;
}
// int main(void)
// {
// 	char *c = "hola";
// 	char *j = "adios";

// 	t_list	*lst1;
// 	lst1 = (t_list *)malloc(sizeof(t_list));

// 	lst1 -> content = c;
// 	lst1 -> next = NULL;
// 	free(lst2);
// 	printf("%d", ft_lstsize(lst1));
// }