/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:35:22 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/06 11:22:19 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0)
	{
		if (!*little)
			return ((char *)big);
		return (NULL);
	}
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && (i + j) < len && big[i + j] == little[j])
				j++;
			if (!little[j])
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	data[] = "fuvk the world";
	char	find[] = " ";

	char	*finder = ft_strnstr(data, find, 7);
	if (finder)
		printf("%s\n", finder);
	else
		printf("NULL\n");
	return (0);
}*/
