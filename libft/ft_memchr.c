/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murmutlu <murmutlu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:51:03 by murmutlu          #+#    #+#             */
/*   Updated: 2023/11/03 14:36:50 by murmutlu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*p;
	unsigned char	src;

	p = (unsigned char *)str;
	src = (unsigned char)c;
	i = 0;
	while (n-- > 0)
	{
		if (p[i] == src)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}
