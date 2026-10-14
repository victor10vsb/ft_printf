/*
ESTE ARCHIVO NO SE DEBE ENTREGAR
*/

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		num;
	int		expected;
	int		actual;
	int		errors;

	num = 42;
	errors = 0;
	printf("\n========== CARACTERES Y CADENAS ==========\n");
	printf("printf: %c\n", 'A');
	ft_printf("ft_printf: %c\n", 'A');
	printf("printf: %s\n", "Hola mundo");
	ft_printf("ft_printf: %s\n", "Hola mundo");
	printf("printf cadena vacia: %s\n", "");
	ft_printf("ft_printf cadena vacia: %s\n", "");
	printf("printf cadena nula: %s\n", (char *)0);
	ft_printf("ft_printf cadena nula: %s\n", (char *)0);

	printf("\n========== ENTEROS ==========\n");
	printf("printf %%d positivo: %d\n", 42);
	ft_printf("ft_printf %%d positivo: %d\n", 42);
	printf("printf %%d negativo: %d\n", -42);
	ft_printf("ft_printf %%d negativo: %d\n", -42);
	printf("printf %%i: %i\n", -123);
	ft_printf("ft_printf %%i: %i\n", -123);
	printf("printf INT_MIN: %d\n", INT_MIN);
	ft_printf("ft_printf INT_MIN: %d\n", INT_MIN);
	printf("printf INT_MAX: %d\n", INT_MAX);
	ft_printf("ft_printf INT_MAX: %d\n", INT_MAX);
	printf("printf %%u: %u\n", 42u);
	ft_printf("ft_printf %%u: %u\n", 42u);
	printf("printf UINT_MAX: %u\n", UINT_MAX);
	ft_printf("ft_printf UINT_MAX: %u\n", UINT_MAX);
	printf("printf %%u negativo convertido: %u\n", (unsigned int)-42);
	ft_printf("ft_printf %%u negativo convertido: %u\n", (unsigned int)-42);

	printf("\n========== HEXADECIMALES ==========\n");
	printf("printf %%x: %x\n", 255u);
	ft_printf("ft_printf %%x: %x\n", 255u);
	printf("printf %%X: %X\n", 255u);
	ft_printf("ft_printf %%X: %X\n", 255u);
	printf("printf hexadecimal cero: %x\n", 0u);
	ft_printf("ft_printf hexadecimal cero: %x\n", 0u);
	printf("printf hexadecimal maximo: %x\n", UINT_MAX);
	ft_printf("ft_printf hexadecimal maximo: %x\n", UINT_MAX);

	printf("\n========== PORCENTAJES Y PUNTEROS ==========\n");
	printf("printf porcentaje: %%\n");
	ft_printf("ft_printf porcentaje: %%\n");
	printf("printf puntero: %p\n", (void *)&num);
	ft_printf("ft_printf puntero: %p\n", (void *)&num);
	printf("printf puntero nulo: %p\n", (void *)0);
	ft_printf("ft_printf puntero nulo: %p\n", (void *)0);

	printf("\n========== VARIAS CONVERSIONES ==========\n");
	printf("printf: %c %s %d %i %u %x %X %%\n",
		'Z', "test", -42, 123, 42u, 255u, 255u);
	ft_printf("ft_printf: %c %s %d %i %u %x %X %%\n",
		'Z', "test", -42, 123, 42u, 255u, 255u);

	printf("\n========== CONTADORES ==========\n");
	expected = printf("%s %d %%\n", "test", 42);
	actual = ft_printf("%s %d %%\n", "test", 42);
	printf("printf devuelve: %d\n", expected);
	printf("ft_printf devuelve: %d\n", actual);
	if (expected == actual)
		printf("OK: los contadores coinciden\n");
	else
	{
		printf("ERROR: los contadores no coinciden\n");
		errors++;
	}

	printf("\n========== FORMATO SIN CONVERSIONES ==========\n");
	expected = printf("Texto sin conversiones\n");
	actual = ft_printf("Texto sin conversiones\n");
	printf("printf devuelve: %d\n", expected);
	printf("ft_printf devuelve: %d\n", actual);
	if (expected == actual)
		printf("OK: los contadores coinciden\n");
	else
	{
		printf("ERROR: los contadores no coinciden\n");
		errors++;
	}

	printf("\n========== CONTADOR DE CADA CONVERSION ==========\n");
	expected = printf("%c", 'A');
	actual = ft_printf("%c", 'A');
	printf("\n%%c -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	expected = printf("%s", "Hola");
	actual = ft_printf("%s", "Hola");
	printf("\n%%s -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	expected = printf("%p", (void *)&num);
	actual = ft_printf("%p", (void *)&num);
	printf("\n%%p -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	expected = printf("%d", INT_MIN);
	actual = ft_printf("%d", INT_MIN);
	printf("\n%%d -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	expected = printf("%i", INT_MAX);
	actual = ft_printf("%i", INT_MAX);
	printf("\n%%i -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	expected = printf("%u", UINT_MAX);
	actual = ft_printf("%u", UINT_MAX);
	printf("\n%%u -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	expected = printf("%x", UINT_MAX);
	actual = ft_printf("%x", UINT_MAX);
	printf("\n%%x -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	expected = printf("%X", UINT_MAX);
	actual = ft_printf("%X", UINT_MAX);
	printf("\n%%X -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	expected = printf("%%");
	actual = ft_printf("%%");
	printf("\n%%%% -> printf: %d | ft_printf: %d\n", expected, actual);
	if (expected != actual)
		errors++;

	printf("\n========== RESULTADO ==========\n");
	if (errors == 0)
		printf("Todas las comprobaciones de contadores han pasado.\n");
	else
		printf("Se han encontrado %d diferencias en los contadores.\n",
			errors);
	return (errors != 0);
}
