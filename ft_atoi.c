int	ft_atoi(const char *str)
{
	int	i;
	int	min;
	int	result;
	int digits;
	int count_sign;

	i = 0;
	min = 0;
	result = 0;
	count_sign = 0;

	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		count_sign++;
		if (str[i] == '-')
			min++;
			if(count_sign > 1)
			return (0);
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str [i] - '0');
		i++;
		digits++;
	}
	if (min == 1)
		return (result * (-1));
		return (result);
}