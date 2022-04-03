#ifndef FT_PRINTF_H
#define FT_PRINTF_H

// va_start va_arg va_copy va_end
#include <stdarg.h>
#include <stdio.h>
#include "../services/libft/libft.h"

int	ft_printf(const char *str, ...);
void	print_char(char c);
void	print_str(char *str);
void	print_ptr(int number);
void	print_integer(int number);
void	print_decimal(int number);
void	print_unsigned_decimal(unsigned int number);
void	print_hex(int number, int is_lowercase);
void	print_percent(int number, int is_lowercase);
char	*ft_uitoa(unsigned int n);

#endif // FT_PRINTF_H
