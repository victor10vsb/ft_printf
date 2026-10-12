/*
ESTE ARCHIVO NO SE DEBE ENTREGAR
*/

#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	int	count;

	count = ft_printf("Hola %s, estamos al 100%%. %c\n", "mundo", 'a');
	ft_printf("Caracteres escritos: %d\n", count);
	//printf("Caracteres escritos: %d\n", count);
	ft_printf("Positivo: %d\n", 472);
	ft_printf("Negativo: %i\n", -583);
	ft_printf("Cero: %d\n", 0);
	ft_printf("Minimo: %d\n", -2147483648);
	ft_printf("Unsigned int de -42: %u", -42);
	return (0);
}
