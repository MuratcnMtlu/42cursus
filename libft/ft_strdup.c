#include "libft.h"
#include <string.h>

char *ft_cpyStr(char * dest , const char * src, size_t size)
{
    int i = 0;
    while (!size)
    {
        *(dest + i) = *(src + i);
        i++;
        size--;
    }
    *(dest + i) = '\0';
    return dest;
}

char *ft_strdup(const char *s)
{
    char *dpc;
    dpc = (char *)malloc(ft_strlen(s) + 1);
    if (!dpc)
        return NULL;
    return  (ft_cpyStr(dpc, s, ft_strlen(s) + 1 ));
}

