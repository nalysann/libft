#include "ft_string.h"

char	*ft_strcat(char *s1, const char *s2)
{
	return (ft_strcpy(s1 + ft_strlen(s1), s2));
}
