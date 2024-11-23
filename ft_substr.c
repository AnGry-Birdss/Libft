/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:55:41 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/03 18:59:20 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*c;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	c = (char *)malloc(len + 1);
	if (!c)
		return (NULL);
	while (s[i] && i < len)
	{
		c[i] = s[start + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
#include <stdio.h>

int	main()
{
	char	*s = ft_substr("start ur life clandestino", 14, 255);

	printf("%s\n", s);
	free(s);
	return (0);
}*/
