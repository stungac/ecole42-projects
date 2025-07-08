size_t  ft_strlcat(char *dst, cost char *src, size_t size)
{
    size_t i;
    size_t j;
    char    *pt_src;

    pt_src = (char *)src;
    i = 0;
    while (i < size && *dst)
    {
        dst++;
        i++;
    }
    if (i == size)
        return(i + ft_strlen(src));
    j = 0;
    while (pt_src[j])
    {
        if (j < size - i - 1)
        {
            *dst++ = pt_src[j];
        }
        j++;
    }
    *dst = 0;
    return (j + i);
}

