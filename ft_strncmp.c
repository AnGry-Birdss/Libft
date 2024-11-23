/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:34:18 by yel-arib          #+#    #+#             */
/*   Updated: 2024/10/25 01:15:43 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	s1[] = "hshsg";
	char	s2[] = "";

	printf("%d\n", memcmp(s1, s2, 5));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));
}*/
