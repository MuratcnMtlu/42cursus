#include <stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *memory;
    memory = malloc(nmemb*size);
     void *ch_memory = memory;
    if (!memory)
        return NULL;    
    while (nmemb)
    {
        *(int *)ch_memory++ = 0; 
        nmemb--;
    }
    return(memory);
}
