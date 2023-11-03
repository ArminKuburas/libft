#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
int main() 
{
    char str[] = "Hello, World!";
    char temp[13]; // Temporary buffer to store "World!"
    
    // Move "World" behind the comma
    ft_memmove(temp, str, 13); // Copy "World" to the temporary buffer
    ft_memmove(str, str + 6, 6);  // Move the "Hello, " part after the comma
	    printf("Modified string: %s\n", str);
    ft_memmove(str + 7, temp, 5); // Copy "World" back after the "Hello, " part
    
    printf("Modified string: %s\n", str);

    return 0;
}