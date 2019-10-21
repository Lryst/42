int		ft_intlen(long nb)
{
	int		len;

	len = 0;
    if (nb == 0)
        return(1);
	if (nb < 0)
	{
		nb = nb * - 1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
    else 
        return (- 1);
	return (len);
}