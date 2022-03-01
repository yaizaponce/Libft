/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:27:12 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:39:07 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_1;
	unsigned char	*s2_1;
	size_t			i;

	s1_1 = (unsigned char *)s1;
	s2_1 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1_1[i] != s2_1[i])
			return (s1_1[i] - s2_1[i]);
		i++;
	}
	return (0);
}
