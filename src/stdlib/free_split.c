#include <stddef.h>
#include <stdlib.h>

#include "ft_stdlib.h"

void free_split(char** split)
{
    for (size_t i = 0; split[i]; ++i) {
        free(split[i]);
    }
    free(split);
}
