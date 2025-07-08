#include<stdio.h>

int	memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char *)ptr1[i] - (unsigned char *)ptr2[i] != 0;)
			return ((unsigned char *)ptr1[i] - (unsigned char *)ptr2[i]);
		i++;
	}
	return (0);
}

int main()
{
	
}
