#include "libft.h"

int	ft_isalnum(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	if (arg >= 'A' && arg <= 'Z')
		return (1);
	if (arg >= 'a' && arg <= 'z')
		return (1);
	return (0);
}
