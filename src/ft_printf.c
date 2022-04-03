#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	char	*nbr_str;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				ft_putchar_fd(va_arg(args, int), 2);
			else if (str[i] == 's')
				ft_putstr_fd(va_arg(args, char *), 2);
			else if (str[i] == 'i' || str[i] == 'd')
				ft_putnbr_fd(va_arg(args, int), 2);
			else if (str[i] == '%')
				ft_putchar_fd('%', 2);
			else if (str[i] == 'u')
			{
				nbr_str = ft_uitoa(va_arg(args, unsigned int));
				ft_putstr_fd(nbr_str, 2);
			}
		}
		else
			ft_putchar_fd(str[i], 2);
		i++;
	}
	va_end(args);
	return (0);
}
