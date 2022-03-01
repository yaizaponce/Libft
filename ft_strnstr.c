/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:26:57 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:42:09 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	s2_len;

	i = 0;
	j = 0;
	k = 0;
	s2_len = ft_strlen(s2);
	if (s2[j] == 0)
		return ((char *)&s1[i]);
	if (s1[i] == 0 || n == 0 || n < s2_len)
		return (0);
	while (s1[i] && i + s2_len <= n)
	{
		j = 0;
		k = 0;
		while (s1[i + k++] == s2[j++])
		{
			if (!s2[j])
				return ((char *)&s1[i + k - j]);
		}
		i++;
	}
	return (0);
}
