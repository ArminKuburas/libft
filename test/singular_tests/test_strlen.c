#include <string.h>
#include <stdio.h>
size_t	ft_strlen(const char *s);

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
int	main()
{
	const char *a = "Hello";
	size_t original = strlen(a);
	size_t mine = ft_strlen(a);
	printf("This is original: %zu\n", original);
	printf("This is mine: %zu\n", mine);
	return 0;
}