/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:33:00 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/06 11:23:29 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	if (size == 0)
		return (size + ft_strlen(src));
	while (dst[j] && j < size)
		j++;
	l = j;
	if (size <= l)
		return (size + ft_strlen(src));
	while (src[i] && l + i + 1 < size)
	{
		dst[l + i] = src[i];
		i++;
	}
	dst[l + i] = '\0';
	return (l + ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*src = "ROME";
	char	dst[10] = "YAYA";

	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, 6));
	printf("%s\n", dst);
}*/
