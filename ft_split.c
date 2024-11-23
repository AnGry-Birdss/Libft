/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:58:53 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/02 04:20:01 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(char const *s, char d)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (*s)
	{
		if (*s == d)
			i = 0;
		else if (!i)
		{
			i = 1;
			c++;
		}
		s++;
	}
	return (c);
}

char	*worder(const char *s, char c)
{
	size_t	i;
	size_t	l;
	char	*w;

	i = 0;
	l = 0;
	while (s[l] && s[l] != c)
		l++;
	w = (char *)malloc(l + 1);
	if (!w)
		return (NULL);
	while (i < l)
	{
		w[i] = s[i];
		i++;
	}
	w[l] = '\0';
	return (w);
}

void	*ft_free(char **s, int f)
{
	int	i;

	i = 0;
	while (i < f)
		free(s[i++]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**spl;

	i = 0;
	if (!s)
		return (NULL);
	spl = (char **)malloc(sizeof(char *) * (counter(s, c) + 1));
	if (!spl)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			spl[i++] = worder(s, c);
			if (!spl[i - 1])
				return (ft_free(spl, i - 1));
			while (*s && *s != c)
				s++;
		}
	}
	spl[i] = NULL;
	return (spl);
}
/*
#include <stdio.h>

int	main()
{
	char	**s = ft_split("the united states of america", ' ');
	int	i = 0;

	while (s[i])
	{
		printf("%s-", s[i]);
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}*/