#include "libft.h"

static int	ft_wdcount(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (i == 0 || s[i - 1] == c))
		{
			words++;
		}
		i++;
	}
	return (words);
}

static char	**allocmem(char const *s, char c)
{
	char	**result;
	int		words;

	words = ft_wdcount(s, c);
	result = (char **)calloc(words + 1, sizeof(char *));
	if (!result)
		return (NULL);
	return (result);
}

static void	ft_putsplwd(char **result, char const *s, char c)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	start = -1;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (start < 0))
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && (start > -1))
		{
			if (s[i] == c)
				end = i;
			else
				end = i + 1;
			result[j] = ft_substr(s, start, end - start);
			j++;
			start = -1;
		}
		i++;
	}
	result[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = allocmem(s, c);
	if (!result)
		return (NULL);
	ft_putsplwd(result, s, c);
	return (result);
}
