int	ft_sqrt(int nb)
{
	int i;

	i = (nb / 2) + 1;
	if (nb <= 0)
		return (0);
	else
	{
		while (i * i > nb)
			i = i / 2;
		while (i * i < nb)
			i++;
		if (i * i == nb)
			return (i);
		else
			return (0);
	}
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(15));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(10000));
}
