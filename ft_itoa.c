/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:50:27 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:36:39 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
		ret = 1;
	return (ret);
}

static int	n_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static unsigned int	positive(int n)
{
	unsigned int	copy;

	if (check_sign(n) == 1)
		copy = n * -1;
	else
		copy = n;
	return (copy);
}

char	*ft_itoa(int n)
{
	char			*nbr;
	int				sign;
	int				len;
	unsigned int	copy;
	int				i;

	i = 1;
	sign = check_sign(n);
	copy = positive(n);
	len = n_len(copy) + sign;
	nbr = (char *)ft_calloc(1, sizeof(char) * (len + 1));
	if (!nbr)
		return (0);
	if (sign == 1)
		nbr[0] = '-';
	while (i <= len)
	{
		if (nbr[len - i] != '-')
			nbr[len - i] = copy % 10 + '0';
		copy = copy / 10;
		i++;
	}
	return (nbr);
}
