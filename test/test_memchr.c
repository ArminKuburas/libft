#include <string.h>
#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}

int	main()
{
	int array[] = {1, 2, 259, 7, 3};
	int look = 3;
	size_t n = 9;
	void	*original = memchr(array, look, n);
	void	*mine = ft_memchr(array, look, n);

	printf("Here is the original. %p, Integer: %d\n", original, original ? *((int *)original) : -1);
	printf("Here is my version. %p, Integer %d\n", mine, mine ? *((int *)mine) : -1);

	return 0;
}