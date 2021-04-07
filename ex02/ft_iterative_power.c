#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (n < 0)
		return (0);
	else if (n == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power -= 1;
		}
		return (result);
	}
}
