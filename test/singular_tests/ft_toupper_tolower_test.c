
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	else
	{
		return (c);
	}
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	else
	{
		return (c);
	}
}

int main() {
    int testCases[] = {0, 128, 255, 'a', 'A', 'z', 'Z', '\n', '\t'};

    for (int i = 0; i < sizeof(testCases) / sizeof(testCases[0]); i++) {
        int input = testCases[i];
        int stdResult = toupper(input);
        int yourResult = ft_toupper(input);

            printf("ft_toupper(%d: '%c'): std: %d, yours: %d\n", input, input, stdResult, yourResult);
    }

    return 0;
}