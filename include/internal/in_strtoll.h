#ifndef IN_STRTOLL_H
# define IN_STRTOLL_H

struct s_strtoll
{
	const char			*str;
	int					base;
	int					sign;
	int					c;
	int					any;
	unsigned long long	res;
};

typedef struct s_strtoll	t_strtoll;

#endif
