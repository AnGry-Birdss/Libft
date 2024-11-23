/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:41:51 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/09 21:28:22 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		cont = f(lst->content);
		node = ft_lstnew(cont);
		if (!node)
		{
			del(cont);
			ft_lstclear(&list, (*del));
			return (list);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
/*
#include <stdio.h>

void	*f_division(void *c)
{
	int	*new;

	new = malloc(sizeof(int));
	if (!new)
		return (NULL);
	*new = (*(int *)c) / 2;
	return (new);
}

void	del(void *c)
{
	if (c)
		free(c);
}

void	printer(t_list *list)
{
	while (list)
	{
		printf("%d --> ", *(int *)list->content);
		list = list->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	int		*v1;
	int		*v2;
	int		*v3;
	int		*v4;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;
	t_list	*new;

	v1 = malloc(sizeof(int));
	v2 = malloc(sizeof(int));
	v3 = malloc(sizeof(int));
	v4 = malloc(sizeof(int));
	*v1 = 16;
	*v2 = 10;
	*v3 = 8;
	*v4 = 40;
	n1 = ft_lstnew(v1);
	n2 = ft_lstnew(v2);
	n3 = ft_lstnew(v3);
	n4 = ft_lstnew(v4);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	// before
	printf("Before : \n");
	printer(n1);
	// after
	new = ft_lstmap(n1, f_division, del);
	printf("After (Maped list) : \n");
	printer(new);
	// final cleaning
	ft_lstclear(&n1, del);
	ft_lstclear(&new, del);
	return (0);
}*/
