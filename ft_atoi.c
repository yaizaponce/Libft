/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:20:08 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:35:06 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

static int	ft_sign(const char *str, int sign)
{
	int	i;

	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		if (str[i] == '+')
			sign = 2;
		if (i > 0 && (str[i - 1] == '-' || str[i - 1] == '+'))
			sign = 3;
		i++;
	}
	return (sign);
}

static int	convert(const char *str)
{
	unsigned int	num;
	unsigned int	converted;
	int				i;

	num = 0;
	converted = 0;
	i = 0;
	if (ft_isdigit(str[i]) == 0)
		return (0);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			break ;
		num = str[i] - 48;
		if (num > 9)
			break ;
		converted = (10 * converted) + num;
		i++;
	}
	return (converted);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	ret;
	int		i;

	sign = 0;
	ret = 0;
	i = 0;
	while (ft_isspace(str[i]) == 1)
			i++;
	sign = ft_sign(&str[i], sign);
	if (sign == 3)
		return (0);
	if (sign == 1 || sign == 2)
		i++;
	ret = convert(&str[i]);
	if (sign == 1)
		return (ret * -1);
	return (ret);
}
