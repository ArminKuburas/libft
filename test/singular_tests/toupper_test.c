#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void) 
{
		int result_ft = ft_toupper('\200');
		int result_toupper = toupper('\200');

		printf("ft_toupper = (%d)\n", result_ft);
		printf("toupper = (%d)\n",result_toupper);
		printf("\n");
	return (0);
}