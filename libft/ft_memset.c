/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murmutlu <murmutlu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:51:23 by murmutlu          #+#    #+#             */
/*   Updated: 2023/11/03 11:51:25 by murmutlu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
    void *ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (ptr);
}
