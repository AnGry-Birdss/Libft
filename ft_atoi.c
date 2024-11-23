/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:35:37 by yel-arib          #+#    #+#             */
/*   Updated: 2024/10/27 16:23:30 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	over_flow(long long int n, long long int t)
{
	if (t / 10 == n)
		return (0);
	return (1);
}

int	isspace_s(const char *str, int *s)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			res *= -1;
		i++;
	}
	*s = i;
	return (res);
}

int	ft_atoi(const char *nptr)
{
	size_t	r;
	size_t	t;
	int		i;
	int		s;

	i = 0;
	r = 0;
	s = isspace_s(nptr, &i);
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		t = r;
		r = r * 10 + (nptr[i] - 48);
		if (over_flow(t, r) == 1)
		{
			if (s == -1)
				return (0);
			return (-1);
		}
		i++;
	}
	return (r * s);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("%d\n", ft_atoi(" 	9223372036854775806"));
	printf("%d\n", atoi("      9223372036854775806"));
}*/
