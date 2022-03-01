/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:27:36 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:40:48 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_1;
	int		i;

	i = 0;
	s_1 = (char *)s;
	while (s_1[i] != 0)
	{
		if (s_1[i] == (char)c)
			return (&s_1[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (0);
}
