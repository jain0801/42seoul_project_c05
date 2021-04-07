#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (n < 0)
		return (ft_recursive_power(nb, power + 1) / nb);
	else if (n == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_revursive_power(nb, power - 1));
}
