#ifndef LIBFT_MALLOC_H
# define LIBFT_MALLOC_H

# include <ctype.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <sys/mman.h>
# include <unistd.h>
# include <sys/time.h>
# include <sys/resource.h>

#include <sys/types.h>
#include <err.h>
#include <fcntl.h>

# define TINY 100
# define SMALL 500

struct s_data
{
    void    *tiny;
    void    *small;
    void    *big;
}       t_data;


void *ft_malloc(size_t size);
void ft_free(void *ptr, int size);
void *realloc(void *ptr, size_t size);

#endif