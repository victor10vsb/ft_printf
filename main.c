/*
ESTE ARCHIVO NO SE DEBE ENTREGAR
*/

#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	int	count;

	count = ft_printf("Hola %s, estamos al 100%%. %c\n", "mundo", 'a');
	//ft_printf("Caracteres escritos: %d\n", count);
	printf("Caracteres escritos: %d\n", count);
	return (0);
}
