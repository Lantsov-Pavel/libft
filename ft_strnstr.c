#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while ((big[i + j] != '\0')
			&& (little[j] != '\0')
			&& (big[i + j] == little[j]))
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}