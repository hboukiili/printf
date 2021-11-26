/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:21:15 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/26 01:39:11 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adress(unsigned long nb)
{
	ft_putstr("0x");
	ft_print_adress(nb);
	return (len2(nb) + 2);
}

int	ft_print_adress(unsigned long nb)
{
	char			*hexa;
	unsigned long	i;

	i = nb;
	hexa = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_print_adress(nb / 16);
		ft_print_adress(nb % 16);
	}
	else
		write(1, &hexa[nb], 1);
	return (len(i));
}

int	len2(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
	}
	while (nb > 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}
