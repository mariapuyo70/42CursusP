#include <unistd.h>
#include <stdio.h>

int	ft_isalpha (int c);

int	main (void)
{
	printf ("Testing ft_isalpha with ASCII characters:\n");
	printf ("Is 'A' alpha? %d\n", ft_isalpha ('A')); // Debería devolver 1
	printf ("Is 'z' alpha? %d\n", ft_isalpha ('z'));// Debería devolver 1
	printf("Is '5' alpha? %d\n", ft_isalpha('5')); // Debería devolver 0
	printf("Is '!' alpha? %d\n", ft_isalpha('!')); // Debería devolver 0
  
	 return (0);
}
