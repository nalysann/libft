#include "ft_ctype.h"

int ft_digittoint(int c)
{
    if ('0' <= c && c <= '9') {
        return c - '0';
    } else if ('A' <= c && c <= 'F') {
        return 10 + c - 'A';
    } else if ('a' <= c && c <= 'f') {
        return 10 + c - 'a';
    }
    return 0;
}
