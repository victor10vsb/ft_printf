*Este proyecto ha sido creado como parte del cirrículo de 42 por vicsanch.*

## Descripción

`ft_printf` recrea la función `printf` para las conversiones obligatorias `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` y `%%`.

**Algoritmo:** recorre el formato de izquierda a derecha. Al encontrar `%`, identifica la conversión, obtiene el argumento mediante `va_list` y llama a la función que lo imprime; mientras tanto, acumula los caracteres escritos. **Estructuras de datos:** no se usan estructuras complejas; se utilizan índices, contadores y `va_list` para los argumentos variables.

## Instrucciones

Ejecuta `make` para crear `libftprintf.a`. Después:

```sh
cc main.c -lftprintf -o test
./test
```

## Recursos

- `man 3 printf` y `man 3 stdarg`.
- Enunciado del proyecto `ft_printf` de 42.
- La IA ayudó a redactar este README y a preparar un main de pruebas que se entregará si el evualuador lo requiere, en particular su estructura y la selección de casos límite.
