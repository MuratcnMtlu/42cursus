
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
    void *ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (ptr);
}
