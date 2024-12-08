#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	if (f == NULL)
	{
		return (NULL);
	}
	while (s[i] == '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
