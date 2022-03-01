/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrjoin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:43:21 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:41:19 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join(char *new, char const *s1, char const *s2, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (size > 1)
	{
		if (s1 != 0 && size > ft_strlen(s2) + 1 && s1[i] != 0)
			new [i] = s1[i];
		if (s2 != 0 && size <= ft_strlen(s2) + 1)
		{
			new[i] = s2[j];
			j++;
		}
		i++;
		size--;
	}
	return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = (char *)ft_calloc(1, size);
	if (!new)
		return (0);
	new = join (new, s1, s2, size);
	return (new);
}
