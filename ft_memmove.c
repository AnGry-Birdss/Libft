/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:32:32 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/06 11:01:01 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((const char *)src)[i];
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	int	n = 0;
	int	src[12] = {1,2,3,4,5,6,7,8,9,10};
	int	dst[10];

	ft_memmove(src+2, src, sizeof(int) * 10);
	while (n < 10)
	{	printf("%p\n", src+2);
		printf("%d\n", src[n]);
		n++;
	}
	return (0);
}*/
