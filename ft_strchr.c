/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:33:51 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/12 19:16:28 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*chr;
	size_t		i;

	chr = (char *)s;
	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	while (*chr != '\0')
	{
		if (*chr == (unsigned char)c)
			return ((char *)chr);
		chr++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	life[] = "lifedeviledeathfearfamillykidsgodhappiness";
	char	*find = strchr(life, 'z');
	char	*Tfind = ft_strchr(life, 'z');

	printf("what sys found %s\n", find);
	printf("his add %p\n", find);
	printf("\n");
	printf("what i found %s\n", Tfind);
	printf("my add %p\n", Tfind);
	printf("\n");
	printf("lifes add %p\n", life);
	return 0;
}*/
