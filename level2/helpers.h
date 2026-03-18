#ifndef HELPERS_H
# define HELPERS_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		build_signature(char *str);
int		check_token(char *input);
void	print_flag(void);

#endif
