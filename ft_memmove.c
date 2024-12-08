#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s || d >= (s + n))
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}
