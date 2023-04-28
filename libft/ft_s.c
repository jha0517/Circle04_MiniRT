/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:33:35 by tnoulens          #+#    #+#             */
/*   Updated: 2022/06/13 14:07:42 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_s(char *p)
{
	int	i;

	if (p)
	{
		i = 0;
		while (p[i] != 0)
		{
			write(1, &p[i], sizeof(char));
			++i;
		}
	}
	else
	{
		write(1, "(null)", 6);
		i = 6;
	}
	return (i);
}