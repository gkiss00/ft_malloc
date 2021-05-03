#include "./libft_malloc.h"

void    *ft_malloc(size_t size) {
    struct rlimit   limit;
    int             page_size;
    int             offset; //multiple of page_size
    void            *addr;

    page_size = getpagesize();
    offset = 0;
    getrlimit(RLIMIT_AS, &limit);

    addr = mmap(NULL, size, PROT_EXEC | PROT_READ | PROT_WRITE, MAP_ANON | MAP_SHARED, -1, offset);
    return addr;
}