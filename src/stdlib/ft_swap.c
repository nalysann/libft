#include <stddef.h>

#include "ft_stdlib.h"

void ft_swap(void* a, void* b, size_t size)
{
    unsigned char* a_uchar = a;
    unsigned char* b_uchar = b;
    while (size--) {
        unsigned char tmp = *a_uchar;
        *a_uchar++ = *b_uchar;
        *b_uchar++ = tmp;
    }
}
