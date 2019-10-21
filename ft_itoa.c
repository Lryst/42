#include <stdlib.h>
#include <stdio.h>

int		ft_intlen(long nb)
{
	int		len;

	len = 0;
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
	return (len);
}

char    *ft_itoa(int nb)
{
    long int len;
    long int n;
    char *str;

    len = ft_intlen(nb);
    n = nb;
    str = (char*)malloc(sizeof(char) * len + 1);
    if (str == NULL)
        return (NULL);
    str[len--] = '\0'; 
    if (n == 0)
    {
        str[0] = 48;
        return (str);
    }
    if (n < 0)
    {
        str[0] = '-';
        n = n * - 1;
    }
    while (n > 0)
    {
        str[len] = 48 + (n % 10);
        n = n / 10;
        len--;
    }
    return (str);
}