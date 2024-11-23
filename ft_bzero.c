/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:32:10 by yel-arib          #+#    #+#             */
/*   Updated: 2024/10/27 00:16:05 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <strings.h>

int	main()
{
	char	c[] = "fvck";
	ft_bzero(c, 2);
	printf("%s\n", c);
	bzero(c, 2);
	printf("%s\n", c);
}*/
