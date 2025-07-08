char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	i;
	size_t	len;
	char *p;

	i = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(len + 1);
	p = (char *)s1;
	while (*p)
	{
		str[i] = *p;
		i++;
		p++;
	}
	p = (char *)s2;
	while (*p)
	{
		str[i] = *p;
		i++;
		p++;
	}
	str[i] = '\0';
}
