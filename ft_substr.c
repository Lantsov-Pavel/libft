#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *result;
    size_t i;

    if(!s)
    return (NULL);
    
    result = (char *)malloc(len + 1);
    if(!result)
    return (NULL);
    
    i = 0;
    while (i < (int)len && s[start + i] != '\0')
    {
        result[i] = s[start + i];
        i++;
    }
    result[i] = '\0';

    return (result);
}

/*int main()
{
    const char *s1 = "123456123";
    printf("%s", ft_substr (s1, 3, 3));
    return 0;
}
*/