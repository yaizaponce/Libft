/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:46:05 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:42:38 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check1(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_strrchr(set, s1[i]) && s1[i] != 0)
		i++;
	return (i);
}

static size_t	check2(char const *s1, char const *set, size_t len)
{
	while (ft_strrchr(set, s1[len]) && len != 0)
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s1 == 0)
		return (0);
	if (set == 0 || s1[0] == 0 || set[0] == 0)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	i = check1(s1, set);
	j = check2(s1, set, len - 1);
	k = 0;
	if (i > j)
		return (ft_strdup(""));
	copy = ft_calloc(1, j - (i - 1) + 1);
	if (!copy)
		return (0);
	while (i <= j)
		copy[k++] = s1[i++];
	return (copy);
}
