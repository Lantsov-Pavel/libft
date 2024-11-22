#include <stddef.h>
size_t	ft_strlen(char *str);

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    
    i = ft_strlen((char *)s);

    while(i != 0)
    {
        if (s[i] == (char)c){
            return ((char *)&s[i]);
        }
        i--;
    }
    return (NULL);
}
