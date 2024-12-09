#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str;

	if (s == NULL)
		return (NULL);
	size = ft_strlen((char *)s) + 1;
	str = (char *)malloc(size);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, size);
	return (str);
}
