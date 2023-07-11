#include "libft.h"

/*
ft_calloc works like malloc does but it also initialises them to zero.
*/
void    *ft_calloc(size_t nitems, size_t size)
{
    void    *result;
 
    result = malloc(nitems * size);
    if (result == NULL)
        return (NULL);
    ft_bzero(result, nitems * size);
    return (result);
}