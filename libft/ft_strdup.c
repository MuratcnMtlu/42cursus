#include "libft.h"
#include <string.h>

char *ft_cpyStr(char * dest , const char * src)
{
    int i = 0;
    while (*src)
    {
        *(dest + i) = *src++;
        i++;
    }
    *(dest + i) = '\0';
    return dest;
}

char *ft_strdup(const char *s)
{
    char *dpc;
    dpc = (char *)malloc(ft_strlen(s) + (size_t)1);
    if (!dpc)
        return NULL;
    return  (ft_cpyStr(dpc, s));
}

