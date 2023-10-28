#include "libft.h"

void	ft_putendl_fd(char *c, int fd)
{
	if (c)
    {
        write(fd, c, ft_strlen(c));
        write(fd, "\n", 1);
    }
}