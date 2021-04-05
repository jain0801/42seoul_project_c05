#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int prime[(nb+1) * (nb+1)];
	int i;
	int j;

	prime[0] = 1;
	prime[1] = 1;
	i = 2;

	while (i <=  nb + 1)
	{
		j = 1;
		while ((i * j) <= nb * nb)
		{
			if (j == 1 && prime[i] != 1)
				prime[i] = 0;
			else
				prime[i*j] = 1;
			j++;
		}
		i++;
	}
	i = nb;
	while (1)
	{
		if (prime[i] != 1)
			break ;
		i++;
	}
	return (i);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(30));
	printf("%d\n", ft_find_next_prime(43));
	printf("%d\n", ft_find_next_prime(50));
	printf("%d\n", ft_find_next_prime(100));
}
