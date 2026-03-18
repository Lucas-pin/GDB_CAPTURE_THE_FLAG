#include "helpers.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Uso: ./level2 <frase>\n");
		return (1);
	}
	if (check_token(argv[1]))
		print_flag();
	else
		ft_putstr("Token invalido\n");
	return (0);
}
