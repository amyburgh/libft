/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyburgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 20:52:38 by amyburgh          #+#    #+#             */
/*   Updated: 2018/05/01 15:02:29 by amyburgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **begin_list)
{
	t_list	*current;
	t_list	*temp;

	current = *begin_list;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*begin_list = NULL;
}
