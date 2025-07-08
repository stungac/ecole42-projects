char	*pass_first(char *s1, char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 1;
	while (s1[i] != '\0')
	{
		if (j == 0)
			break;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				j++;
			}
			else
				break;
		}
	}
	return (s1 + i);
}
/*
char	*pass_last(char *s1, char *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 1;
	while (i >= 0)
	{
		if (j == 0)
			break;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i--;
				j++;
			}
			else
				break;
		} 
	}
	return (s1 -  i);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	char	*b;
	char	*str;
	size_t	i;
	size_t	j;

	a = (char *)s1;
	b = (char *)set;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen (set) + 1);
	i = 0;
	j = 1;
	while (s1[i] != '\0')
	{
		if (j == 0)
			break;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				j++;
			}
			else
				break;
		}
	}
}
