/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:17:29 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:40:56 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	s2 = 0;
	if (s1 == 0)
		return (0);
	s2 = malloc(sizeof(char) * (j + 1));
	if (!s2)
		return (0);
	while (s1[i] != 0)
	{
		s2[i] = (char)s1[i];
		i++;
	}
	if (i == j)
		s2[i] = 0;
	return (s2);
}
