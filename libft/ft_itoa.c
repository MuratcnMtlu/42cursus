#include <stdlib.h>

static int  nbr_len(int nbr)
{
    int i;

    i = 0;
    if (nbr < 1)
        i++;
    while (nbr)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    int             len;
    char            *str;
    unsigned int    nb;
    int sign;

    sign = 0;
    len = nbr_len(n);
    str = (char*)malloc(len + 1);
    if (!str)
        return NULL;
    *(str + len) = '\0';
    if (n < 0)
    {
        n *= -1;
        sign = 1;
    }
    nb = n;
    while (len--)
    {
        *(str + len) = 48 + (nb % 10);
        nb /= 10;
    }
    if (sign)
        *(str) = 45;
    return (str);
}

