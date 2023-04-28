/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:38:47 by tnoulens          #+#    #+#             */
/*   Updated: 2022/06/13 14:07:56 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_hex(unsigned long addr, char *digit, int i)
{
	digit[i] = addr % 16;
	if (digit[i] < 10)
		digit[i] += 48;
	else
		digit[i] += 87;
}

int	ft_p(void *p)
{
	int				i;
	int				count;
	unsigned long	addr_in_decimal;
	char			addr_digit[16];

	if (p == NULL)
	{
		write (1, "(nil)", 5);
		return (count = 5);
	}
	count = 2;
	addr_in_decimal = (unsigned long)p;
	i = 0;
	while (addr_in_decimal)
	{
		ft_hex(addr_in_decimal, addr_digit, i);
		++i;
		addr_in_decimal /= 16;
	}
	count += i;
	write(1, "0x", 2);
	while (--i >= 0)
		ft_putchar_fd(addr_digit[i], 1);
	return (count);
}
