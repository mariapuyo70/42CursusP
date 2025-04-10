#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	aux;

	i = 1;
	aux = tab[0];
	if (len > 0)
	{
		while (i < len)
		{
			if (tab[i] > aux)
				aux = tab[i];
			i++;
		}
		return (aux);
	}
	return (0);
}
