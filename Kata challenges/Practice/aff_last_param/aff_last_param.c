#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac >= 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while(av[ac - 1][i])
		{
			write(1, &av[ac - 1][i--], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}

/*#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

int		main(int argc, char *argv[])
{
	(argc >= 2) ? ft_putstr(argv[argc - 1]) : 0;
	write(1, "\n", 1);
	return (0);
}*/
