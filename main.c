int main()
{
    printf("ITOA%s\n", ft_itoa(2323));
    printf("ITOA%s\n", ft_itoa(0));
    printf("ITOA%s\n", ft_itoa(-2147483648));
    printf("ITOA%s\n", ft_itoa(2147483647));
    return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
	
	printf("ATOI%d\n", ft_atoi(av[1]));
	printf("ATOI%d\n", atoi(av[1]));
	return (0);
}

int main()
{
    printf("INTLEN%d\n", ft_intlen(-2));
    printf("INTLEN%d\n", ft_intlen(2147483647));
    printf("INTLEN%d\n", ft_intlen(-1234567));
    printf("INTLEN%d\n", ft_intlen(0));
    printf("INTLEN%d\n", ft_intlen(kj));
    return (0);
}

int main()
{
    printf("STRJOIN%s\n", ft_strjoin("bonjour les copains", "p"));
}

int main(int ac, char **av)
{
	size_t n = 4;
	
	printf("STRLCAT = %lu\n", strlcat(strdup(av[1]), strdup(av[2]), n));
	printf("FT_STRLCAT = %lu\n", ft_strlcat(av[1], av[2], n));
	
	return (0);
}

int main(int ac, char **av)
{
	size_t n = 4;
	
	printf("STRLCPY = %lu\n", strlcpy(strdup(av[1]), strdup(av[2]), n));
	printf("FT_STRLCPY = %lu\n", ft_strlcpy(av[1], av[2], n));
	
	return (0);
}

int main()
{
	printf("SUBSTR%s\n", ft_substr("bonjour les copains, vous allez bien ?", - 1, - 1));
	return 0;
}
