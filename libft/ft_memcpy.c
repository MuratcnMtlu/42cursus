#include <stddef.h>
void *ft_memcpy(void *dest, const void * src, size_t n)
{
	int	i;
	void	*dest_ptr;

	dest_ptr = dest;
	i = 0;
	if (dest == (void*)0 && src == (void*)0)
		return (dest);
	while (i++ < (int)n)
	{
		*(char*)dest++ = *(char*)src++;
	}
	return (dest_ptr);
}
