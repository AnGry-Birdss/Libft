/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:32:22 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/06 10:51:20 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*str;
	char		*rec;
	size_t		i;

	i = 0;
	str = (const char *)src;
	rec = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		rec[i] = str[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(){
	char	s[] = "abcdefghijklmnopqrstuvwxyz";
	char	d[27];

	ft_memcpy(d, s+6, sizeof(char) * 5);
	printf("%s\n", d);
}*/
