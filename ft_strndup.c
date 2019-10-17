#include <stdlib.h>
char	*ft_strdup(const char *s1, int n)
{
	char *dest;
	int i;

	i = 0;
	while (s1[i] && i < n)
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (dest == 0)
		return (NULL);
	i = 0;
	while (s1[i] && i < n)
	{
		dest[i] = s1[i];
		i++;
	}
    dest[i] = '\0';
	return (dest);
}
