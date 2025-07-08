void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *pt_dest;
    char *pt_src;

    pt_dest = (char *)dest;
    pt_src = (char *)src;
    i = 0;
    if ((pt_dest != NULL) && (pt_src != NULL))
    {
        while (i < n)
        {
            pt_dest[i] = pt_src[i];
            i++;
        }
    }
    return (dest);
}
