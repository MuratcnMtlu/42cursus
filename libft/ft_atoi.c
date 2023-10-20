     #include "libft.h"
     #include <stdlib.h>

     int    ft_atoi(const char *str)
     {
        unsigned int result = 0;
        int i = 0;
        int sign = 1;
        int sign_cout = 0;

        while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		    i++;
        while (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                sign *= -1;
            sign_cout++;
             if (sign_cout > 1)
             return 0;  
            i++;
        }
        while ((str[i] > 47) && (str[i] < 58))
        {
            result *= 10;
            result += str[i] - '0';
            i++;
        }
        return (result * sign);
     }