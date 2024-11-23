/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:24:16 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/09 21:24:26 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pre;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	pre = *lst;
	while (pre->next)
		pre = pre->next;
	pre->next = new;
}
/*
#include <stdio.h>

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*head = NULL;
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));
	int *d = malloc(sizeof(int));

	*a = 10;
	*b = 20;
	*c = 30;
	*d = 40;
//	head = NULL;
	// Create and add new nodes to the linked list
	ft_lstadd_back(&head, ft_lstnew(a));
	ft_lstadd_back(&head, ft_lstnew(b));
	ft_lstadd_back(&head, ft_lstnew(c));
	ft_lstadd_back(&head, ft_lstnew(d));
	// Print the linked list to verify
	print_list(head);
	// Free the allocated memory
	return (0);
}*/
