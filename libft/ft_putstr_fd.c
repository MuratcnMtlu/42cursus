#include "libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	if (c)
    {
        write(fd, c, ft_strlen(c));
    }
}