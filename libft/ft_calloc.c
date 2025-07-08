void* ft_calloc(size_t num, size_t size)
{
	void	*pt;

	pt = malloc(num * size);
	if (pt == NULL)
		return (pt);
	ft_bzero(pt, num * size);
	return (pt);
}
