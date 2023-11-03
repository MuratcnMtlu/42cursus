/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murmutlu <murmutlu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:52:47 by murmutlu          #+#    #+#             */
/*   Updated: 2023/11/03 11:52:48 by murmutlu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
     size_t i = 0;
    
    if (n == 0)
    {
        return  0;
    }
    
    while (i < n  && (str1[i] ||  str2[i]))
    {
        if (str1[i] != str2[i])
        {
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        }
        i++;
    }
    return 0; 
}

// unsigned char niye kullanılıyo bul...