/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 05:11:06 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/03 21:28:01 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*all;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	all = (char *)malloc((last - first) + 1);
	if (!all)
		return (NULL);
	ft_memcpy(all, s1 + first, last - first);
	all[last - first] = '\0';
	return (all);
}
/*
#include <stdio.h>

int	main()
{
	char	*resulta = ft_strtrim("@#$yahya@#$", "@#$");

	printf("%s\n", resulta);
	free(resulta);
	return (0);
}*/
