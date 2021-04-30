int	ft_strstartswith(const char *str, const char *prefix)
{
	while (*str == *prefix)
	{
		if (*prefix == '\0')
			break ;
		++str;
		++prefix;
	}
	return (*prefix == '\0');
}
