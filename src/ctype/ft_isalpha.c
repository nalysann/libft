#include "ft_ctype.h"

int ft_isalpha(int c)
{
    return ft_isupper(c) || ft_islower(c);
}
