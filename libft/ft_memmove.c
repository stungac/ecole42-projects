void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *pt_dest;
    char *pt_src;

    i = 0;
    pt_dest = (char *)dest;
    pt_src = (char *)src;
    if (pt_src > pt_dest)
    {
        while (i < n)
        {
            pt_dest[i] = pt_src[i];
            i++;
        }
    }
    else
    {
        while (i != n)
        {
            pt_dest[n - 1 - i] = pt_src[n - 1 - i];
            i++; 
        }
    }
    return (dest);
}
