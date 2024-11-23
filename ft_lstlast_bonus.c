/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:40:46 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/09 21:27:45 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main()
{
	t_list *head = NULL;

	printf("Last node (expected NULL): %p\n", (void *)ft_lstlast(head));

	int val1 = 42;
	int val2 = 84;
	int val3 = 168;

	t_list *node1 = ft_lstnew(&val1);
	t_list *node2 = ft_lstnew(&val2);
	t_list *node3 = ft_lstnew(&val3);

	head = node1;
	node1->next = node2;
	node2->next = node3;

	t_list *last = ft_lstlast(head);
	if (last != NULL)
		printf("Last node content (expected 168): %d\n", *(int *)last->content);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
