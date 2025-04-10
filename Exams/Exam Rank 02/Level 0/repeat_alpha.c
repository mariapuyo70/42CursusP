#include <unistd.h>
#include <stdio.h>

void	ft_repeat(char c, int repeats)
{
	while (repeats != 0)
	{
		write (1, &c, 1);
		repeats --;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	repeats;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			repeats = argv[1][i] - 'A' + 1;
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			repeats = argv[1][i] - 'a' + 1;
		else
			repeats = 1;
		ft_repeat(argv[1][i], repeats);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
