#include <stddef.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
    char *str1;
    char *str2;
    size_t i;

    str1 = (char *)s1;
    str2 = (char *)s2;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}