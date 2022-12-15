/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:34:05 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/20 14:09:17 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", len);
	else if (n < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(n * -1, len);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
	else
		ft_putchar(n + '0', len);
}
