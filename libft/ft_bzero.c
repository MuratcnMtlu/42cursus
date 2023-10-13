#include <stddef.h>

void	ft_bzero(void *str, size_t n)
{
    while (n--)
		*(unsigned char*)str++ = '\0';
	
}
