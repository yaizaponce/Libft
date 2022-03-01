/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:26:27 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:41:31 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	dl_copy;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	dl_copy = dst_len;
	i = 0;
	if (dstsize == 0)
		return (src_len);
	if (dst == 0 || src == 0)
		return (dst_len + src_len);
	while (42)
	{
		dst[dl_copy] = src[i];
		if (src[i] == 0)
			break ;
		if (dl_copy < dstsize - 1)
			dl_copy++;
		i++;
	}
	if (dl_copy > dstsize)
		return (dstsize + src_len);
	return (dst_len + src_len);
}
