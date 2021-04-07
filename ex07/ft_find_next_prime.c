int	ft_is_prime(int nb)
{
	int j;

	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	else if (nb % 2 == 0 || nb % 3 == 0)
	{
		return ft_is_prime(nb+1);
	}
	else if (nb == 2147483647)
		return (nb);
	j = 5;
	while (j * j <= nb)
	{
		if (nb % j == 0 || nb % (j + 2) == 0)
		{
			return ft_is_prime(nb+1);
		}
		j += 6;
	}
	return (nb);
	
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(20));
	printf("%d\n", ft_is_prime(100));
	printf("%d\n", ft_is_prime(1000));
	printf("%d\n", ft_is_prime(2000));
	printf("%d\n", ft_is_prime(3000));
	printf("%d\n", ft_is_prime(4000));
	printf("%d\n", ft_is_prime(5000));
	printf("%d\n", ft_is_prime(6000));
	printf("%d\n", ft_is_prime(7000));
	printf("%d\n", ft_is_prime(8000));
	printf("%d\n", ft_is_prime(2100000000));
	printf("%d\n", ft_is_prime(2147483645));
	printf("%d\n", ft_is_prime(2147483647));
}
