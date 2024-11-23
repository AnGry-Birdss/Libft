/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:40:05 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/09 21:29:00 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 42;
    t_list *node = ft_lstnew(&value);

    if (node == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("Node content: %d\n", *(int *)node->content);
    printf("Node next: %p\n", (void *)node->next);

    free(node);  // Free the allocated memory

    return 0;
}*/
