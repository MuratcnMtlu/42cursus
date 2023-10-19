#include "libft.h"
#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    int i = -1;
    const unsigned char *p = (const unsigned char *)str;
    unsigned char src = (unsigned char)c;

    while (n-- > 0)
    {
        if  (p[i] == src)
            return  (void *)(p + i);
        i++;
    }
    return 0;
}
