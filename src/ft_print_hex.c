/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:39:42 by vivan-de          #+#    #+#             */
/*   Updated: 2022/04/29 10:47:52 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_hex(long int nbr, char c, int ***char_count, int with_prefix)
{
	char	*nbr_str;

	if (with_prefix != 0)
	{
		if (c == 'x')
			ft_print_str("0x", char_count);
		else
			ft_print_str("0X", char_count);
		nbr_str = ft_itohex(nbr, c);
		ft_print_str(nbr_str, char_count);
		free(nbr_str);
	}
	else
	{
		nbr_str = ft_itohex(nbr, c);
		ft_print_str(nbr_str, char_count);
		free(nbr_str);
	}
	if (!nbr)
		ft_print_char('0', char_count);
}
