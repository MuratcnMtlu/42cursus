#include "libft.h"
#include <stdio.h>
#include <string.h>

char*   ft_strchr(const char*str, int c)
{
    int i = 0;
    char *dst = (char *)str;

    while (i < (int)sizeof(str))
    {
        if (*(dst) == c)
            break ;
        i++;
        dst++;
    }
    if (i == (int)sizeof(str) && c != '\0')
    {
            return NULL; // Aksi takdirde, c bulunamadı
    } 
    return dst;
}

/*
int main(void)
{
    const char cdizi[] = "Bilgisayar";
    char *ret;
    char *dst;
    ret = strchr(cdizi, '\0');
    dst = ft_strchr(cdizi, '\0');

    printf("benim dizi içeriği: %s\n", dst);
    printf("hazır dizi içeriği: %s", ret);

    return 0;
}
*/