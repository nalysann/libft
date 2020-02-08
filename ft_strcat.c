/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:43:30 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:43:32 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
    char	*ret;

    ret = s1;
    while (*s1)
        ++s1;
    while ((*s1++ = *s2++))
        ;
    return (ret);
}