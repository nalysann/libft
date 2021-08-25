#include "ft_ctype.h"

int ft_isgraph(int c)
{
    return '!' <= c && c <= '~';
}
