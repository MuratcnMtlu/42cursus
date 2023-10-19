 #include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *arg)
{
    int i = 0;
    while (arg[i] != '\0')
        i++;
    return  i;
}

 char * ft_strrchr(const char *s, int c)
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
