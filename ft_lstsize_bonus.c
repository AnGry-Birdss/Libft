/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:40:33 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/09 21:28:00 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
/*
#include <stdio.h>

int	main()
{
	t_list	*head = NULL;
	printf("list size : %d\n", ft_lstsize(head));
	int	v = 703;
	int	v1 = 504;
	t_list	*n = ft_lstnew(&v);
	t_list	*n1 = ft_lstnew(&v1);
	head = n;
	n->next = n1;
	printf("list size : %d\n", ft_lstsize(head));
	free(n);
	free(n1);
	return (0);
}*/
