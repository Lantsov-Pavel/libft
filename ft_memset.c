#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    char *b;
    int i;
    i = 0;
    b = (char *)s;
    while (i < n)
    {
        b[i] = (char)c;
        i++;
    }
    return s;
}
