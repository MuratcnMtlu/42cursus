#include <stddef.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i = -1;
    size_t ssize = ft_strlen(s);
    char *new_Str;

    if (!s)
        return (0);
    if (len >   ssize -(size_t)start)
        len =   ssize - (size_t)start;
    if (start >= ssize)
        len = 0;
    new_Str = (char *)malloc(len + 1);
    if (!new_Str)
		return (0);
   while (++i < len)
        new_Str[i] = s[start + i];
    new_Str[len] = '\0';
    return new_Str;
}
