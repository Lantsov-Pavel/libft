#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

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
	int		len;
	unsigned int 	num;

	if (n < 0)
		num = n * (-1);
	else
		num = n;
	len = ft_intlen(n);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
		result[0] = '-';
	i = len - 1;
	while (num != 0)
	{
		result[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (result);
}