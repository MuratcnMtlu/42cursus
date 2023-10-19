    #include "libft.h"

    int ft_memcmp(const void *s1, const void *s2, size_t n)
    {
        unsigned char *p1 = (unsigned char*)s1;
        unsigned char *p2 = (unsigned char*)s2;
        size_t i = 0;

        if (n == 0)
        {
            return  0;
        }
        
        while ((++i < n) && (*p1 == *p2))
        {
            p1++;
            p2++;
        }
        return  ((int)(*p1 - *p2));
    }
