     #include "libft.h"
     
    char *ft_strnstr(const char *haystack, const char *needle, size_t len)
    {
        unsigned char *str = (unsigned char*)haystack;
        unsigned char *search = (unsigned char*)needle; 
        
        size_t i = 0;
        size_t j = 0;
        size_t lng = ft_strlen(needle);
        while (str[i])
        {
            j = 0;
            while ((str[i + j] == search[j]) && (i + j) < len)
            {
                if (str[i + j] == '\0' && search[j] == '\0')
				    return ((char *)&str[i]);
                j++;
            }
            if (j == lng)
            {
               return ((char *)(str + i));
            }
            i++;
        }
        return 0;
     }