#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// ft_strchr but reversed

// size_t ft_strlen(const char *s)
// {
//     size_t len;

//     len = 0;
//     while (s[len] != '\0')
//         len++;
//     return len;
// }

// #include <stdio.h>

// int main()
// {
//     char	*str;


//     str = "Hello";
//     printf("%s\n", ft_strrchr(str, 'o'));
//     printf("%s\n", ft_strrchr(str, 'l'));
//     printf("%s\n", ft_strrchr(str, 'e'));
//     printf("%s\n", ft_strrchr(str, '\0'));
//     printf("%s\n", ft_strrchr(str, '0'));
//     printf("%s\n", ft_strrchr(str, 0));
//     return (0);
// }