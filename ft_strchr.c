#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return ((char *)s + i);
        i++;
    }
 	if (!c && s[i] == '\0')
		return ((char *)s + i);   
    return (NULL);
}

// in string pointed by s find c
// if c is found return a pointer to the first occurrence of c in s -> s='hello\n' c=e then return ello
// if c is not found return NULL

// #include <stdio.h>
// int main(void)
// {
//     char	*p;
//     char	b[6] = "hello\0";
//     int		c;
//     size_t	len;

//     c = 'e';
//     len = 5;
//     p = ft_strchr(b, c);
//     printf("%s\n", p);
//     return (0);
// }