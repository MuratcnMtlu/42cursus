#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dpc;

    dpc = (char *)malloc(ft_strlen(s) + 1);
    if (!dpc)
        return NULL;
    ft_strlcpy(dpc, s, ft_strlen(s) + 1);
    return (dpc);
}