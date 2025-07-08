char	*ft_strnstr(const char *to_find, const char *word, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if(word[0] == '\0')
		return ((char *)to_find);
	while(to_find[h] != '\0')
	{
		n = 0;
		while (to_find[h + n] == word[n] && (h + n) < len)
		{
			if (to_find[h + n] == '\0' && word[n] == '\0')
				return ((char *)&to_find[h]);
			n++;
		}
		if (word[n] == '\0')
			return ((char *)to_find + h);
		h++;
	}
	return (0);
}
