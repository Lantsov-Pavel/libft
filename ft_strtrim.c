#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	checkstart(char const *s1, char const *set)
{
	size_t	index;
	int		i;

	i = 0;
	index = 0;
	while (set[i] != '\0')
	{
		if (s1[index] == set[i])
		{
			index++;
			i = 0;
		}
		else
		{
			i++;
		}
	}
	return (index);
}

static size_t	checktail(const char *s1, char const *set, size_t s1_len)
{
	size_t	index;
	int		i;

	index = s1_len;
	i = 0;
	while (set[i] != '\0')
	{
		if (s1[index - 1] == set[i])
		{
			index--;
			i = 0;
		}
		else
		{
			i++;
		}
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	s1_len;
	size_t	start;
	size_t	tail;
	size_t	len;

	s1_len = ft_strlen((char *)s1);
	start = checkstart(s1, set);
	tail = checktail(s1, set, s1_len);
	len = tail - start;
	result = ft_substr(s1, start, len);
	return (result);
}
