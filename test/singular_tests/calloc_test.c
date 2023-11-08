#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*(ptr) = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (!count || !size)
		return (ft_calloc(1, 1));
	total_size = count * size;
	if ((count != 0 && total_size / count != size) || total_size > 2147483648)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	if (ptr)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}

int	main()
{
	size_t	count = 0;
	size_t	size = 1;

	printf("Testing calloc with count = %zu, size = %zu:\n", count, size);

	int	*standard_calloc_result = (int *)calloc(count, size);
	if (standard_calloc_result)
	{
		printf("Standard calloc result: Memory allocated.\n");
		free(standard_calloc_result);
	}
	else
	{
		printf("Standard calloc result: Memory not allocated.\n");
	}

	int	*ft_calloc_result = (int *)ft_calloc(count, size);
	if (ft_calloc_result)
	{
		printf("Your ft_calloc result: Memory allocated.\n");
		free(ft_calloc_result);
	}
	else
	{
		printf("Your ft_calloc result: Memory not allocated.\n");
	}

	return (0);
}
