*Este proyecto ha sido creado como parte del currículo de 42 por ecano-mo.*

# ft_printf

## Descripción
ft_printf es una reimplementación de la función printf() de la librería estándar de C. 
El objetivo de este proyecto es comprender en profundidad el funcionamiento de las funciones variadicas en C, 
el manejo de argumentos de longitud variable y la gestión estructurada de memoria y salida estándar.

Esta librería imita la funcionalidad del `printf` original, dando soporte a las siguientes conversiones:
- `%c`: Imprime un solo carácter.
- `%s`: Imprime una cadena de caracteres (string).
- `%p`: Imprime un puntero en formato hexadecimal (`void *`).
- `%d`: Imprime un número decimal (base 10).
- `%i`: Imprime un entero en base 10.
- `%u`: Imprime un número decimal sin signo (unsigned).
- `%x`: Imprime un número hexadecimal (base 16) en minúsculas.
- `%X`: Imprime un número hexadecimal (base 16) en mayúsculas.
- `%%`: Imprime el símbolo del porcentaje.
## Instrucciones

### Requisitos
- Compilador gcc.
- make.

### Compilación
Para compilar la librería `libftprintf.a`, ejecuta el siguiente comando en la raíz del repositorio:

- make

### Recursos
Se ha usado man 3 printf y stackoverflow como referencia
