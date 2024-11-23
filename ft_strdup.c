/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:36:02 by yel-arib          #+#    #+#             */
/*   Updated: 2024/10/28 00:44:14 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*nm;
	size_t	i;

	i = 0;
	nm = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!nm)
		return (NULL);
	while (*s)
		nm[i++] = *s++;
	nm[i] = '\0';
	return (nm);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	*s = "fvck";
	char	*me = NULL;
	char	*sys = NULL;

	me = ft_strdup(s);
	sys = strdup(s);
	printf("our f alloc : %s --> sys alloc : %s\n", me, sys);
	return (0);
}
*/
