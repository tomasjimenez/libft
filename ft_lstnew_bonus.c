/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:50:10 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/14 21:07:44 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include<stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst -> content = (void *) content;
	lst -> next = NULL;
	return (lst);
}
// int main(void)
// {
// 	char *c = "hola";
// 	t_list *lst;
// 	lst = ft_lstnew(c);
// 	printf("%s", lst->content);
// }