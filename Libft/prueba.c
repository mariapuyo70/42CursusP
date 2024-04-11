#include <unistd.h>
#include <stdio.h>

int	ft_isalpha (int c);

int	main (void)
{
	printf ("Testing ft_isalpha with ASCII characters:\n");
	printf ("Is 'A' alpha? %d\n", ft_isalpha ('A'));
	printf ("Is 'z' alpha? %d\n", ft_isalpha ('z'));
	printf("Is '5' alpha? %d\n", ft_isalpha('5')); // Debería devolver 0
	printf("Is '!' alpha? %d\n", ft_isalpha('!')); // Debería devolver 0
    
    // Pruebas con caracteres fuera del rango ASCII
	printf("\nTesting ft_isalpha with non-ASCII characters:\n");
	printf("Is '3' alpha? %d\n", ft_isalpha('3')); // Dependiendo del entorno y la codificación, el resultado puede variar
	printf("Is '4' alpha? %d\n", ft_isalpha('4')); // Dependiendo del entorno y la codificación, el resultado puede variar

	 return 0;
}
