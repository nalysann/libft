#include "ft_ctype.h"

int ft_isspace(int c)
{
    return c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ';
}
