/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyburgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 23:58:03 by amyburgh          #+#    #+#             */
/*   Updated: 2018/05/01 14:59:18 by amyburgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *begin_list)
{
	size_t	count;
	t_list	*size;

	count = 0;
	size = begin_list;
	while (size)
	{
		size = size->next;
		count++;
	}
	return (count);
}
