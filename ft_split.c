/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:47:00 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:40:35 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hmany(const char *s, char c)
{
	int	quant;
	int	i;

	quant = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			quant++;
		}
		if (*s == c)
			i = 0;
		s++;
	}
	return (quant);
}

static char	*cut(const char *s, int start, int end)
{
	char	*new;
	int		i;

	i = 0;
	new = ft_calloc(1, (end - start + 1) * sizeof(char));
	if (!new)
		return (0);
	while (start < end)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	int		k;

	array = ft_calloc(1, (hmany(s, c) + 1) * sizeof(char *));
	if (!s || !(array))
		return (0);
	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			array[j] = cut(s, k, i);
			j++;
			k = -1;
		}
		i++;
	}
	return (array);
}
