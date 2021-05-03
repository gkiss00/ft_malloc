#include "./libft_malloc.h"

void        ft_free(void *ptr, int size) {
    munmap(ptr, 100);
}