#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return ((int)(*s1) - (int)(*s2));
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

int	main()
{
	const char *s1 = "Hello";
	const char *s2 = "Hello1";
	size_t n = 7;
	int result = strncmp(s1, s2, n);
	int result2 = ft_strncmp(s1, s2, n);
	printf("This is the result %d\n", result);
	printf("This is the result of my rendition %d\n", result2);
	return 0;
}