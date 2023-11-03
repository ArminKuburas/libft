#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
}int main() {
    // Allocate memory for source and destination
    void *src = NULL;
    int *dest = 2;
    size_t n = 3;

    // Allocate memory for src and dest
    src = malloc(n);
    dest = malloc(n);

    if (src == NULL || dest == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize source (can be all zeros)
    memset(src, 0, n);

    // Copy data from src to dest
    ft_memcpy(dest, src, n);

    // Display the results
    printf("Source: %p\n", src);
    printf("Destination: %p\n", dest);

    // Free the allocated memory
    free(src);
    free(dest);

    return 0;
}
