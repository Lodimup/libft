#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *s;
    char    *d;
    size_t  i;

    s = (char *)src;
    d = (char *)dst;
    i = 0;
    if (!dst && !src)
        return (dst);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

// https://www.tutorialspoint.com/c_standard_library/c_function_memcpy.htm

// The C library function void *memcpy(void *dest, const void *src, size_t n) copies n characters from memory area src to memory area dest.

// Declaration
// Following is the declaration for memcpy() function.

// void *memcpy(void *dest, const void * src, size_t n)
// Parameters
// dest − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

// src − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.

// n − This is the number of bytes to be copied.

// Explicit type conversion
// (dtype)var

// Dereference
// *ptr

// if (n == 0)
//     return (dst);