/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:42:10 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:42:51 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	if (s == 0 || start >= ft_strlen(s) || len == 0)
	{
		new = ft_calloc(1, 1);
		if (!new)
			return (0);
		return (new);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new = (char *)ft_calloc(1, len + 1);
	if (!new)
		return (0);
	i = 0;
	while (s[start] && i < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	return (new);
}
