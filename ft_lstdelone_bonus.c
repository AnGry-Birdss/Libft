/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:41:14 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/09 21:26:49 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
	int *v1 = malloc(sizeof(int));
	int *v2 = malloc(sizeof(int));
	int *v3 = malloc(sizeof(int));

	*v1 = 1337;
	*v2 = 300703;
	*v3 = 80504;

	t_list *n1 = ft_lstnew(v1);
	t_list *n2 = ft_lstnew(v2);
	t_list *n3 = ft_lstnew(v3);

	n1->next = n2;
	n2->next = n3;

    printf("befor:\n");
	print_list(n1);

    n1->next = n3;  //protecting the deletion to ensure 
                    //the linking between n1 & n3 while deletin n2

    ft_lstdelone(n2, del);
    printf("after:\n");
    print_list(n1);

    ft_lstdelone(n1, del);
    ft_lstdelone(n3, del);

    return 0;
}
*/
