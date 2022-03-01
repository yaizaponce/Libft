/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:26:12 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:39:27 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst == src || len == 0)
		return (dst);
	if (src < dst)
	{
		while (len != 0)
		{
			dst2[len - 1] = src2[len - 1];
			len--;
		}
		return (dst);
	}
	if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
