/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:09:17 by vivan-de          #+#    #+#             */
/*   Updated: 2022/05/01 12:51:42 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_ptr(void *ptr, int ***char_count)
{
	if (!ptr)
		ft_print_str("(nil)", char_count);
	else
		ft_print_hex((unsigned long int) ptr, 'x', char_count, 1);
}
