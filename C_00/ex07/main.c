#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
    write (1, "\n", 1);

    ft_putnbr(-42);
    write (1, "\n", 1);

    ft_putnbr(42);
    return (0);
}