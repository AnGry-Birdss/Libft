/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:35:48 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/03 05:38:19 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbe, size_t size)
{
	char	*zero;
	size_t	i;

	i = 0;
	if (nbe && (nbe * size) / nbe != size)
		return (NULL);
	zero = (char *)malloc(nbe * size);
	if (!zero)
		return (NULL);
	while (i < size * nbe)
		zero[i++] = 0;
	return (zero);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int	*arr;
	int	*arr1;
	int	i = 0;

	//arr = (int *)calloc(3037000499, 3037000499);
	arr1 = (int *)ft_calloc(30, sizeof(size_t));
	if (!arr1)
    	{
        	printf("Memory allocation failed\n");
        	return (1);
    	}
	while (i < 30)
	{
		printf("%d", arr1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < 10)
        {
                printf("%d", arr1[i]);
                i++;
        }
	//free(arr);
	free(arr1);
	return (0);
}*/
