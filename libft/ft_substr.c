#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;
	size_t	m;

	m = strlen((const char *)s) - (size_t)start;
	sub = (char *)malloc(m + 1);
	if (sub == NULL)
		return (sub);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + (unsigned int)i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
int main()
{
	char *p;
	char st[] = "asdfasdfasdf";
	p = st;

	printf("%s", ft_substr(p, 3, 6));
}
