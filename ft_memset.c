#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

// create a pointer p to hold pointer b casted into char * since b is void *
// set all the values of p to c (except the last one \0)


// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	*p;
// 	char	b[6] = "hello\0";
// 	int		c;
// 	size_t	len;

// 	c = 'a';
// 	len = 5;
// 	p = ft_memset(b, c, len);
// 	printf("%s\n", p);
// 	return (0);
// }