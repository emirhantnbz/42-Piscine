#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int  n);

int	main(void)
{
	char	dest[7] = "42";
	char	src[7] = "Kocaeli";

	ft_strncpy(dest, src, 4);
	printf("%s\n", dest);
}
