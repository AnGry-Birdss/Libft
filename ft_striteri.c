/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 04:02:51 by yel-arib          #+#    #+#             */
/*   Updated: 2024/10/31 06:39:19 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	f(unsigned int i, char *c)
{
	*c = *c + 1;
}
int	main()
{
	char	s1[] = "1234567";

	ft_striteri(s1, f);
	printf("%s\n", s1);
}*/
