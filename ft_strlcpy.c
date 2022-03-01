/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:56:21 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:41:39 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dst == 0 || src == 0 || dstsize == 0)
		return (j);
	while (src[i] != '\0')
	{
		if (dstsize == 1 || src[i] == '\0')
			break ;
		dst[i] = src[i];
		dstsize--;
		i++;
	}
	dst[i] = '\0';
	return (j);
}
