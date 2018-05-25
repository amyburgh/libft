/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyburgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 03:31:29 by amyburgh          #+#    #+#             */
/*   Updated: 2018/05/24 19:22:38 by amyburgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/macros.h"
#include "../include/libft.h"

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
		ft_putstr(INT_MIN_STR);
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * (-1);
		}
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}
