
#include <stddef.h>

size_t ft_strlen(const char *arg)
{
    int i = 0;
    while (arg[i] != '\0')
        i++;
    return  i;
}
