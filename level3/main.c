#include "level3.h"

int	main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*token;

	if (!parse_args(argc, argv, &x, &y, &token))
	{
		ft_putstr("Uso: ./level3 <x> <y> <token>\n");
		return (1);
	}
	if (verify_access(x, y, token))
		print_flag();
	else
		ft_putstr("Clave incorrecta\n");
	return (0);
}
