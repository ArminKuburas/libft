#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int	main()
{
	int x[] = {1, 2, 3, 4, 5};
	int y[] = {6, 7, 8, 9, 0};
	int z[] = {5, 4, 3, 2, 1};
	size_t n = 5;
	size_t i = 0;
	memcpy(x, y, n);
    printf("This is the original: ");
    while (i < n) {
        printf("%d ", x[i]);
		i++;
    }
   ft_memcpy(x, z, n);
   i = 0;
    printf("This is my rendition: ");
    while (i < n) {
        printf("%d ", x[i]);
		i++;
    }
    printf("\n");
	return (0);
}