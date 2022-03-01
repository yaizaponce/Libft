/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yponce-p <yponce-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:30:42 by yponce-p          #+#    #+#             */
/*   Updated: 2022/03/01 19:38:28 by yponce-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = NULL;
	newlst = malloc(sizeof(t_list));
	if (!newlst)
		return (0);
	else
	{
		newlst->content = content;
		newlst->next = NULL;
	}
	return (newlst);
}
