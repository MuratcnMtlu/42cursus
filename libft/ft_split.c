
#include "libft.h"


/*
    Kaç kelime var bul
    malloc
    hafıza kontrol
    charı ara ilerlet 
    else de kelimeyi yükle 

*/

static char	**free_array(char **ptr, size_t step)
{
    while (step-- > 0)
        free(*(ptr + step));
	return (free(ptr), NULL);
}

static size_t   wordlen(char const *s, char c)
{
    size_t  wordlen;

    wordlen = 0;
    while (*s)
    {
        if (*s == c)
           s++;
        else
        {
            wordlen++;
            while (*s && *s != c)
                s++;
        }
    }
    return (wordlen);
}

char    **ft_split(char const *s, char c)
{
    size_t wordsize;
    size_t lett_count;
    char **splitted;
    size_t step;

    step = 0;
    wordsize = wordlen(s, c);
    splitted = (char **)malloc((wordsize + 1) * sizeof(char*));
    if (!splitted)
        return NULL;
    while (*s)
    {
        if (*s == c)
           s++;
        else
        {
            lett_count = 0;
            while (*s && *s != c && ++lett_count)
                s++;
            *splitted = ft_substr(s - lett_count, 0, lett_count);
            if (!*splitted++ && ++step)
                return (free_array(splitted, step));
        }
    }
    *splitted = NULL;
    return(splitted - wordsize);
}

/*
#include <stdio.h>

int main(void)
{
    char **str;
    int i = 0;
    str = ft_split("mur,mut,aa", ',');
    while (i < 3)
    {
         printf("%s\n",str[i++]);
    }
    
   
}
*/

