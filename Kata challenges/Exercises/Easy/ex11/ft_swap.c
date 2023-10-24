// Create a function that swaps the value of two integers whose addresses are entered
//     as parameters.
// • Here’s how it should be prototyped : 
// void ft_swap(int *a, int *b);

#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	 int     a;
	 int     b;
	 
	 a = 42;
	 b = 24;
	 ft_swap(&a, &b);
	 printf("a: %d\n b: %d\n", a, b);
	 return (0);
}
