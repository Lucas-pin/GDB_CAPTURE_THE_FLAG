#include <unistd.h>
#include "helpers.h"

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
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

static int	is_alnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (is_alnum(str[i]))
		{
			if (new_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

static int	sum_ascii(char *str)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (str[i])
	{
		sum += str[i];
		i++;
	}
	return (sum);
}

int	build_signature(char *str)
{
	int	len;
	int	sum;

	len = ft_strlen(str);
	sum = sum_ascii(str);
	return (sum + (len * 7) + (str[0] * 3) + str[len]);
}

int	check_token(char *input)
{
	char	buffer[128];

	ft_strcpy(buffer, input);
	ft_strlowcase(buffer);
	ft_strcapitalize(buffer);
	if (build_signature(buffer) == 1409)
		return (1);
	return (0);
}

void	print_flag(void)
{
	ft_putstr("FLAG{nivel2_step_watch_backtrace}\n");
}
