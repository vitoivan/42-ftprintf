/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:16:56 by vivan-de          #+#    #+#             */
/*   Updated: 2022/04/29 10:54:27 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// va_start va_arg va_copy va_end
# include <stdarg.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_flags {
	int	zero;
	int	dash;
	int	dot;
	int	space;
	int	hashtag;
	int	plus;
}	t_flags;

int		ft_printf(const char *str, ...);
int		ft_is_conversion(char c);
void	ft_print_arg(char *str, va_list args, int *char_count, int *i);
void	ft_print_conversion(unsigned int c, va_list args, int **char_count);
void	ft_print_char(unsigned int c, int ***char_count);
void	ft_print_str(char *str, int ***char_count);
char	*ft_uitoa(unsigned int n);
char	*ft_itohex(long int number, char type);
void	ft_print_udigit(unsigned int nbr, int ***char_count);
void	ft_print_signed_digit(int nbr, int ***char_count);
void	ft_print_digit(int nbr, int ***char_count);
void	ft_print_hex(long int nbr, char c, int ***char_count, int with_prefix);
void	ft_print_ptr(void *ptr, int ***char_count);

#endif // FT_PRINTF_H
