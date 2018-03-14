/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amishra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 00:51:57 by amishra           #+#    #+#             */
/*   Updated: 2018/03/14 02:06:55 by amishra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tab;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	tab = ft_strnew(size);
	if (!(tab))
		return (NULL);
	while (s[i])
	{
		tab[i] = f(s[i]);
		i++;
	}
	return (tab);
}