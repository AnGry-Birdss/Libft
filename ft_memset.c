/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:31:37 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/03 06:38:41 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main()
{
	char	str[10];
	unsigned char	x = 'x';
	
	ft_memset(str, x, 1);//hade bach de3mar str hta l NULL
	printf("%s\n", str);

	int	a = 5082004;

	ft_memset(&a, 77, 3);
	ft_memset(&a, 139, 2);
	ft_memset(&a, 148, 1);
	printf("%d\n", a);
}*/
