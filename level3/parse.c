#include "level3.h"

static int	has_invalid_char(char *str)
{
	int	i;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

long	ft_atoi(char *str)
{
	long	nbr;

	nbr = 0;
	while (*str)
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (nbr);
}

int	parse_positive_int(char *text, int *value)
{
	long	n;

	if (has_invalid_char(text))
		return (0);
	n = ft_atoi(text);
	if (n < 1 || n > 1000)
		return (0);
	*value = (int)n;
	return (1);
}

int	parse_args(int argc, char **argv, int *x, int *y, char **token)
{
	if (argc != 4)
		return (0);
	if (!parse_positive_int(argv[1], x))
		return (0);
	if (!parse_positive_int(argv[2], y))
		return (0);
	*token = argv[3];
	return (1);
}
