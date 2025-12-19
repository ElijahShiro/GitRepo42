#include <stdio.h>
#include <limits.h>
#include "libftprintf.h"

int main(void)
{
	int		ret_ft;
	int		ret_orig;
	char	*str_null = NULL;
	void	*ptr_null = NULL;
	int		n = 42;
	int		*ptr = &n;

	printf("\n========== TEST MANUAL FT_PRINTF ==========\n");

	// --- 1. CARACTERES ---
	printf("\n[TEST 1] Caracteres:\n");
	ret_ft = ft_printf("   FT: %c %c %c\n", 'a', 'z', '!');
	ret_orig = printf(" ORIG: %c %c %c\n", 'a', 'z', '!');
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 2. STRINGS ---
	printf("\n[TEST 2] Strings:\n");
	ret_ft = ft_printf("   FT: %s\n", "Hola Mundo");
	ret_orig = printf(" ORIG: %s\n", "Hola Mundo");
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 3. STRING NULL (Debe imprimir (null)) ---
	printf("\n[TEST 3] String NULL:\n");
	ret_ft = ft_printf("   FT: %s\n", str_null);
	ret_orig = printf(" ORIG: %s\n", str_null);
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 4. ENTEROS (Decimales e Integers) ---
	printf("\n[TEST 4] Enteros:\n");
	ret_ft = ft_printf("   FT: %d, %i, %d\n", 42, -42, 0);
	ret_orig = printf(" ORIG: %d, %i, %d\n", 42, -42, 0);
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 5. UNSIGNED (Sin signo) ---
	printf("\n[TEST 5] Unsigned:\n");
	// Caso normal y caso negativo (-1 se convierte a positivo grande)
	ret_ft = ft_printf("   FT: %u | %u\n", 42, -1);
	ret_orig = printf(" ORIG: %u | %u\n", 42, -1);
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 6. HEXADECIMALES (%x, %X) ---
	printf("\n[TEST 6] Hexadecimales:\n");
	ret_ft = ft_printf("   FT: %x | %X\n", 255, 255);
	ret_orig = printf(" ORIG: %x | %X\n", 255, 255);
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 7. PUNTEROS (%p) ---
	printf("\n[TEST 7] Punteros:\n");
	ret_ft = ft_printf("   FT: %p\n", ptr);
	ret_orig = printf(" ORIG: %p\n", ptr);
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 8. PUNTERO NULL (%p) -> Debe ser (nil) ---
	printf("\n[TEST 8] Puntero NULL:\n");
	ret_ft = ft_printf("   FT: %p\n", ptr_null);
	ret_orig = printf(" ORIG: %p\n", ptr_null);
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 9. PORCENTAJE (%%) ---
	printf("\n[TEST 9] Porcentaje:\n");
	ret_ft = ft_printf("   FT: 100%%\n");
	ret_orig = printf(" ORIG: 100%%\n");
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	// --- 10. MIXTO ---
	printf("\n[TEST 10] Mixto:\n");
	ret_ft = ft_printf("   FT: %c %s %p %d %X\n", 'A', "Test", ptr, 123, 255);
	ret_orig = printf(" ORIG: %c %s %p %d %X\n", 'A', "Test", ptr, 123, 255);
	printf(" Retornos -> FT: %d | ORIG: %d\n", ret_ft, ret_orig);

	return (0);
}
