/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:25:05 by vivan-de          #+#    #+#             */
/*   Updated: 2022/05/14 13:50:06 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int value = 0;
	int ret_printf;
	int return_ft_printf;

	ft_printf("\n----------- Char test-------------\n");
	ret_printf = printf("%c\n", 'c');
	return_ft_printf = ft_printf("%c\n", 'c');
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);

	ft_printf("\n----------- Integer test-------------\n");
	ft_printf("\n--- INT_MAX ---\n");
	ret_printf = printf("%d\n", INT_MAX);
	return_ft_printf = ft_printf("%d\n", INT_MAX);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);

	ft_printf("\n--- INT_MIN ---\n");
	ret_printf = printf("%d\n", INT_MIN);
	return_ft_printf = ft_printf("%d\n", INT_MIN);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);


	ft_printf("\n----------- String test-------------\n");
	ret_printf = printf("%s\n", "Some random string for testing");
	return_ft_printf = ft_printf("%s\n", "Some random string for testing");
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);


	ft_printf("\n----------- Pointer test-------------\n");
	ret_printf = printf("%p\n", &value);
	return_ft_printf = ft_printf("%p\n", &value);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);


	ft_printf("\n----------- Unsigned number test-------------\n");
	ret_printf = printf("%u\n", INT_MIN);
	return_ft_printf = ft_printf("%u\n", INT_MIN);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);


	ft_printf("\n----------- Lowercase HEX test-------------\n");
	ret_printf = printf("%x\n", INT_MIN);
	return_ft_printf = ft_printf("%x\n", INT_MIN);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);
	ft_printf("\n");
	ret_printf = printf("%x\n", INT_MAX);
	return_ft_printf = ft_printf("%x\n", INT_MAX);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);
	ft_printf("\n");
	ret_printf = printf("%x\n", 123123213);
	return_ft_printf = ft_printf("%x\n", 123123213);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);


	ft_printf("\n----------- Uppercase HEX test-------------\n");
	ret_printf = printf("%X\n", INT_MIN);
	return_ft_printf = ft_printf("%X\n", INT_MIN);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);
	ft_printf("\n");
	ret_printf = printf("%X\n", INT_MAX);
	return_ft_printf = ft_printf("%X\n", INT_MAX);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);
	ft_printf("\n");
	ret_printf = printf("%X\n", 123123213);
	return_ft_printf = ft_printf("%X\n", 123123213);
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);


	ft_printf("\n----------- Percent sign test-------------\n");
	ret_printf = printf("%%\n");
	return_ft_printf = ft_printf("%%\n");
	printf("return printf: %d\n", ret_printf);
	ft_printf("return ft_printf: %d\n", return_ft_printf);

	ft_printf("\n\n");
	return (0);
}
