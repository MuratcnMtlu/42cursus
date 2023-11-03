#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	word_counter;

	word_counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{	
			word_counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word_counter);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	j;
    size_t letter_counter;

   
	i = 0;
	j = 0;
	while (i < words_count)
	{
        if (*(s + j) == c)
            j++;
        else
        {
            letter_counter = 0;
            while (*(s + j) && *(s + j) != c && ++letter_counter)
		    	j++;
            *(array + i) = ft_substr(&*((s + j) - letter_counter), 0 , letter_counter);
		    if (!*(array + i))
			    return (free_array(i, array),NULL);
            i++;
        }
	}
	return (*(array + i) = NULL, array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}
