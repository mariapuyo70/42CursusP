#include <unistd.h>
#include <stdio.h>

void	putnbr2(int i)
{
	int	j;
	int	k;

	j = (i / 10) + '0';
	k = (i % 10) + '0';
	write(1, &j, 1);
	write(1, &k, 1);
}

int	main(void)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i >= 10)
			putnbr2(i);
		else
		{
			j = i + '0';
			write(1, &j, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}
