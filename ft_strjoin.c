/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:56:34 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/08 21:47:03 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*total;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	total = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!total)
		return (NULL);
	while (s1[i])
	{
		total[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		total[i] = s2[j];
		i++;
		j++;
	}
	total[i] = '\0';
	return (total);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[] = "angry";
	char	s2[] = "bird";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
