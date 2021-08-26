#include <stddef.h>

#include "ft_stdlib.h"

int ft_atoi(const char* str)
{
    return (int)ft_strtol(str, (char**)NULL, 10);
}
