#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;
	size_t	len;

	len = ft_intlen(n);
	result = malloc(len + 1);
	i = len - 1;
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		result[0] = '-';
		n = n * (-1);
	}
	while (n != 0)
	{
		result[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (result);
}
