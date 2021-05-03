#include "libft_malloc.h"

int         main() {
    // struct rlimit limit;

    // getrlimit(RLIMIT_AS, &limit);
    // printf("%llu : %llu\n", limit.rlim_cur, limit.rlim_max);
    // printf("%d\n", getpagesize());

    // char    *tmp = ft_malloc(100);
    // memcpy(tmp, "Je suis une string de presque 100 caracteres ou un peu moins woullah", 50);
    // printf("%s\n", tmp);
    // ft_free(tmp, 100);
    size_t * ptr;
    ptr = malloc(12*sizeof(size_t));
    for (int i = 0; i < 100; ++i)
        printf("%d : Header = %zu\n", i, *(ptr-i));
}