#include <stddef.h>
#include <stdlib.h>

#include "ft_stdlib.h"

void ft_memdel(void** ap)
{
    free(*ap);
    *ap = NULL;
}
