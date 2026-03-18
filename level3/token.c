#include "level3.h"

int	normalize_token(char *dst, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		if ((*src >= 'a' && *src <= 'z') || (*src >= 'A' && *src <= 'Z')
			|| (*src >= '0' && *src <= '9'))
		{
			if (*src >= 'a' && *src <= 'z')
				dst[i++] = *src - 32;
			else
				dst[i++] = *src;
		}
		src++;
	}
	dst[i] = '\0';
	return (i);
}

int	token_score(char *str)
{
	long	acc;

	acc = 0;
	while (*str)
	{
		acc = (acc * 31) + *str;
		acc = acc & 0x7FFFFFFF;
		str++;
	}
	return ((int)acc);
}

int	verify_access(int x, int y, char *token)
{
	char	normalized[128];
	int		checksum;
	int		score;

	if (x != 5 || y != 3)
		return (0);
	normalize_token(normalized, token);
	checksum = rush_checksum(x, y);
	score = token_score(normalized);
	if ((score ^ 500698679) == checksum)
		return (1);
	return (0);
}

void	print_flag(void)
{
	ft_putstr("FLAG{nivel3_modular_rush_debug}\n");
}
