#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("FT_ITOA%s\n", ft_itoa(2323));
    printf("ITOA%s\n", itoa(2323));
    printf("FT_ITOA%s\n", ft_itoa(0));
    printf("ITOA%s\n", itoa(0));
    printf("FT_ITOA%s\n", ft_itoa(-2147483648));
    printf("ITOA%s\n", itoa(-2147483648));
    printf("FT_ITOA%s\n", ft_itoa(2147483647));
    printf("ITOA%s\n", itoa(2147483647));
    return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
	
	printf("FT_ATOI%d\n", ft_atoi(av[1]));
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
	printf("FT_SUBSTR%s\n", ft_substr("bonjour les copains, vous allez bien ?", - 1, - 1));
	return 0;
}

int main()
{
    printf("FT_STRNSTR%s\n",ft_strnstr("bonjour les copains", "bonjou", 14));
    printf("STRNSTR%s\n",strnstr("bonjour les copains", "bonjou", 14));
    printf("FT_STRNSTR%s\n",ft_strnstr("bonjour les copains", NULL, 14));
    printf("STRNSTR%s\n",strnstr("bonjour les copains", NULL, 14));
    printf("FT_STRNSTR%s\n",ft_strnstr("bonjour les copains", "les", 0));
    printf("STRNSTR%s\n",strnstr("bonjour les copains", "les", 0));
    printf("FT_STRNSTR%s\n",ft_strnstr(NULL, "les", 14));
    printf("STRNSTR%s\n",strnstr(NULL, "les", 14));
    return (0);
}

int main()
{
    print("%p\n", *ft_calloc(6, 7));
}