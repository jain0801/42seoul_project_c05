int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	else
	{
		while (i*i <= nb)
			i++;
		if (i == nb)
			return (i);
		else
			return (0);
	}
}
