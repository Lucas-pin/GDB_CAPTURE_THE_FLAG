#include <unistd.h>

static void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

static int	is_digit_string(char *s)
{
	int	i;

	i = 0;
	if (!s[0])
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
** Intentional bug for GDB practice:
** the loop stops one character too early and skips the last digit.
*/
static int	checksum(char *s)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (s[i + 1])
	{
		sum += (s[i] - '0');
		i++;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Usage: ./practice <digits>\n");
		return (1);
	}
	if (!is_digit_string(argv[1]))
	{
		ft_putstr("Error: use only digits\n");
		return (1);
	}
	if (checksum(argv[1]) == 10)
		ft_putstr("FLAG{practice_gdb_basic}\n");
	else
		ft_putstr("Access denied\n");
	return (0);
}
