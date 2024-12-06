#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
size_t ft_strlen(char *str);

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    size_t i;
    char *ptr;

    i = 0;
    s1_len = ft_strlen((char*)s1);
    s2_len = ft_strlen((char*)s2);
    ptr = malloc(s1_len + s2_len + 1);

    if (ptr == NULL)
        return NULL;

    while (i < s1_len)
    {
        ptr[i] = s1[i];
        i++;
    }
    while (i < s1_len + s2_len)
    {
        ptr[i] = s2[i - s1_len];
        i++;
    }

    ptr[i] = '\0';

    return ptr;
}
int main()
{
    const char *s1 = "12345";
    const char *s2 = "67890";
    char *result = ft_strjoin(s1, s2);   
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}