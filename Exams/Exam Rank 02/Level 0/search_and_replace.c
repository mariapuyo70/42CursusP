#include <unistd.h>
#include <stdio.h>

int	replace(char *s, char *d, char *f)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == d[0])
			s[i] = f[0];
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	replace(argv[1], argv[2], argv[3]);
	while (argv[1][i])
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
