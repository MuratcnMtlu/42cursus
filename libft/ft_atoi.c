#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] > 47) && (str[i] < 58))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
