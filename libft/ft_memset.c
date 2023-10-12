#include <stddef.h>
void * memset ( void * ptr, int value, size_t num )
{
    int i = 0;
    while (i < num)
    {
        ptr[i++] = (u)value;

    }
    return  ptr;
}
