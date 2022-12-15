/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:54:40 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/20 13:14:08 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned long c, char *hex, int *len)
{
	if (c > 15)
		ft_hexa(c / 16, hex, len);
	ft_putchar(hex[c % 16], len);
}
