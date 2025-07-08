size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    char    *pt_src;

    pt_src = (char *)src; //burayı haticeye sorr. Yapmama gerek var mı ? zaten char veri tipinde.
    i = 0;
    if (size > 0)
    {
        while (pt_src[i] && i < size - 1)
        {
            dst[i] = pt_src[i];
            i++;
        }
        dst[i] = 0;
    }
    while (src[i])
    {
        i++;
    }
    return (i);
}

