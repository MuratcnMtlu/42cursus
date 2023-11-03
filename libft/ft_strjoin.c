/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murmutlu <murmutlu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:52:17 by murmutlu          #+#    #+#             */
/*   Updated: 2023/11/03 11:52:18 by murmutlu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i = -1;
    int j = -1;
    char *new_Str;

    if (!s1 || !s2)
        return (0);
    new_Str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!new_Str)
        return (0);
    while (++i < (int)ft_strlen(s1))
        new_Str[i] = s1[i];
    while (++j < (int)ft_strlen(s2))
        new_Str[i + j] = s2[j];
    new_Str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
    return (new_Str);
}
