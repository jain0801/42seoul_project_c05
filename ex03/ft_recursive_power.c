#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	result = 1;
	if (n < 0)
		return (0);
	else if (n == 0)
	{
		if (n == 0)
			return (1);
		else
			return (0);
	}
	else
	{
		if (power > 0)
			return (nb * ft_revursive_power(nb, power-1));
		else
			return (1);
}
