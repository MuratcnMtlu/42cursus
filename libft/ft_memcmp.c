/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murmutlu <murmutlu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:51:08 by murmutlu          #+#    #+#             */
/*   Updated: 2023/11/03 17:19:48 by murmutlu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;
    
    i = 0;
    p2 = (unsigned char*)s2;
    p1 = (unsigned char*)s1;
	if (n == 0)
		return  (0);
	while ((++i < n) && (*p1 == *p2))
	{
		p1++;
		p2++;
	}
	return ((int)(*p1 - *p2));
}
