#ifndef IN_STRTOL_H
# define IN_STRTOL_H

struct s_strtol
{
	const char		*str;
	int				base;
	int				sign;
	int				c;
	int				any;
	unsigned long	res;
};

typedef struct s_strtol		t_strtol;

#endif
