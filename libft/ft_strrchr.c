/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murmutlu <murmutlu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:52:54 by murmutlu          #+#    #+#             */
/*   Updated: 2023/11/03 15:41:27 by murmutlu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i = (int)ft_strlen(s);
    char src = (char)c;

    while (i >= 0)
    {
        if (s[i] == src)
        {
            return  ((char*)(s +i));
        }
        i--;
    }
    return 0;
}
