/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:31:27 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/20 13:06:05 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	if (!s)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (*s)
	{
		ft_putchar(*s, len);
		s++;
	}
}
