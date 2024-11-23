/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-arib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 04:06:29 by yel-arib          #+#    #+#             */
/*   Updated: 2024/11/06 11:25:33 by yel-arib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}
/*
int	main()
{
	ft_putendl_fd("roma", 1);
}*/
