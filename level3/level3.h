#ifndef LEVEL3_H
# define LEVEL3_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
long	ft_atoi(char *str);
int		parse_positive_int(char *text, int *value);
int		parse_args(int argc, char **argv, int *x, int *y, char **token);
int		rush_checksum(int x, int y);
int		normalize_token(char *dst, char *src);
int		token_score(char *str);
int		verify_access(int x, int y, char *token);
void	print_flag(void);

#endif
