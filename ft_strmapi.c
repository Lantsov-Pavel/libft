#include <stddef.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    size_t len;
    char* result;

    i = 0;
    len = ft_strlen(s);
    result = (char*)malloc(len + 1);
    if (result == NULL)
    {
        return NULL;
    }
    if (s == NULL)
    {
        return NULL;
    }
    if (f == NULL)
    {
        return NULL;
    }
    while (i > len)
    {
       result[i] = f(i, &s[i]);
        i++;
    }
    result[len] = '\0';
    return result;
}