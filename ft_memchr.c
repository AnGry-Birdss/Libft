/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:35:01 by yel-arib          #+#    #+#             */
/*   Updated: 2024/10/29 06:12:37 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	data[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	char	*pos = ft_memchr(data, 'd', 6);
	
	printf("%c\n", *pos);
}*/
