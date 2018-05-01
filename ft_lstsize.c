/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyburgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 23:58:03 by amyburgh          #+#    #+#             */
/*   Updated: 2018/05/01 16:02:05 by amyburgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *begin_list)
{
	int	count;
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
