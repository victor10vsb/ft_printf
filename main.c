/*
ESTE ARCHIVO NO SE DEBE ENTREGAR
*/

#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	int	count;
	int	num;

	count = ft_printf("Hola %s, estamos al 100%%. %c\n", "mundo", 'a');
	ft_printf("Caracteres escritos: %d\n", count);
	//printf("Caracteres escritos: %d\n", count);
	ft_printf("Positivo: %d\n", 472);
	ft_printf("Negativo: %i\n", -583);
	ft_printf("Cero: %d\n", 0);
	ft_printf("Minimo: %d\n", -2147483648);
	ft_printf("Unsigned int de -42: %u", (unsigned int)-42);
	ft_printf("Hex minusculas: %x\n", 42);
	ft_printf("Hex mayusculas: %X\n", 42);
	ft_printf("255 en hexadecimal: %x\n", 255);
	ft_printf("256 en hexadecimal: %X\n", 256);
	num = 42;
	ft_printf("Puntero: %p\n", &num);
	ft_printf("Puntero nulo: %p\n", (void *)0);
	return (0);
}
