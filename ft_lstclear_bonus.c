/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:41:27 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/09 21:26:33 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void	del(void *c)
{
	if (c)
		free(c);
}

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
	int		*v1;
	int		*v2;
	int		*v3;

	v1 = malloc(sizeof(int));
	v2 = malloc(sizeof(int));
	v3 = malloc(sizeof(int));
	
	*v1 = 1337;
	*v2 = 300703;
	*v3 = 80504;
	
	t_list	*n1 = ft_lstnew(v1);
	t_list	*n2 = ft_lstnew(v2);
	t_list	*n3 = ft_lstnew(v3);
	
	n1->next = n2;
	n2->next = n3;
	
	printf("befor:\n");
	print_list(n1);

	ft_lstclear(&n1, del);

	printf("after:\n");
	print_list(n1);
	return (0);
}*/
