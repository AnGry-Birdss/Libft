/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:25:49 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/09 21:25:56 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main()
{
	t_list *head = NULL;
	int v1 = 42;
	int v2 = 84;
	int v3 = 168;
	int v4 = 3456977;
	t_list *n1 = ft_lstnew(&v1);
	t_list *n2 = ft_lstnew(&v2);
	t_list *n3 = ft_lstnew(&v3);
	t_list *n4 = ft_lstnew(&v4);
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);
	ft_lstadd_front(&head, n4);
	t_list *new = head;
	while (new)
	{
		printf("Node content: %d\n", *(int *)new->content);
		new = new->next;
	}
	return 0;
}*/
