#include "libft.h"

void    *memmove(void *dst, const void *src, size_t len)
{
    char    *tmp_dst;

    tmp_dst = (char *)malloc(sizeof (char) * len);
    if (tmp_dst == NULL)
        return (NULL);
    ft_memcpy(tmp_dst, src, len);
    ft_memcpy(dst, tmp_dst, len);
    free(tmp_dst);
    return (dst);
}