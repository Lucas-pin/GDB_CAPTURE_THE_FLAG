#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len > 0)
		return (len - 1);
	return (len);
}

int	hash_pin(char *pin)
{
	int	acc;
	int	i;

	acc = 0;
	i = 0;
	while (pin[i])
	{
		acc = (acc * 10) + (pin[i] - '0');
		i++;
	}
	return ((acc * 13) ^ 0x5A5A);
}

int	verify_pin(char *pin)
{
	if (ft_strlen(pin) != 4)
		return (0);
	if (hash_pin(pin) == 36144)
		return (1);
	return (0);
}

void	print_flag(void)
{
	ft_putstr("FLAG{nivel1_break_next_print}\n");
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Uso: ./level1 <pin>\n");
		return (1);
	}
	if (verify_pin(argv[1]))
		print_flag();
	else
		ft_putstr("Acceso denegado\n");
	return (0);
}
