/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murmutlu <murmutlu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:52:21 by murmutlu          #+#    #+#             */
/*   Updated: 2023/11/03 11:52:21 by murmutlu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *arg) {
    size_t i = 0;
    while (arg[i] != '\0')
        i++;
    return i;
}

size_t ft_strlcat(char *dest, const char *src, size_t destsize) {
    size_t size_Arr = ft_strlen((const char *)dest);
    size_t i = 0;

    if (destsize <= size_Arr)
        return destsize + ft_strlen(src);
    
    while (src[i] != '\0' && (size_Arr + i) < (destsize - 1)) {
        dest[size_Arr + i] = src[i];
        i++;
    }
    dest[size_Arr + i] = '\0';
    return size_Arr + ft_strlen((const char*)src);
}

// return değerleri tam o   turmadı