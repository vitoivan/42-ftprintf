#include "includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
    ft_printf("some random strin %s \n", "some asdasdasd$$$$");
    printf("some random strin %s \n", "some asdasdasd$$$$");

    ft_printf("some random strin %s \n", "Other randok strong\n\n");
    printf("some random strin %s \n", "Other randok strong\n\n");
    return 0;
}
