char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*cpy;

	i = 0;
	len = ft_strlen(str);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (cpy);
	return (ft_strcpy(cpy, str));
}
