/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:56:35 by tojimene          #+#    #+#             */
/*   Updated: 2022/04/14 21:05:52 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*item;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		item = (*lst)->next;
		ft_lstdelone (*lst, del);
		*lst = item;
	}
	lst = NULL;
}
