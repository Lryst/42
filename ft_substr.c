#include <stdlib.h>
#include <stdio.h>
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	write(1, "a\n", 2);
	unsigned long int i;
	unsigned long int u;
	char *res;

	i = 0;
	u = 0;
	if (s == NULL || start < 0 || len < 0)
		return (NULL);
	res = (char*)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0' && i < start)
		i++;
	write(1, "b\n", 2);
	while (u < len - 1)
	{
			res[u] = s[i];
			i++;
			u++;
	}
	write(1, "c\n", 2);
	res[u] = '\0';
	return (res);
}
int main()
{
	printf("%s\n", ft_substr("bonjour les copains, vous allez bien ?", - 1, - 1));
	return 0;
}
