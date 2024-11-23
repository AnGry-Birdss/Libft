/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:34:05 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/12 19:17:08 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	life[] = "life$devile$death$fear$familly$kids$god$happiness";
	char	*find = strrchr(life, '$');
	char	*Tfind = ft_strrchr(life, '$');

	printf("what sys found %s\n", find);
	printf("\n");
	printf("what i found %s\n", Tfind);
	return 0;
}*/