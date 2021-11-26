/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 02:34:24 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/26 01:44:29 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(int long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

int	ft_printhexalow(unsigned int nb)
{
	char			*hexa;
	unsigned int	i;

	i = nb;
	hexa = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_printhexalow(nb / 16);
		ft_printhexalow(nb % 16);
	}
	else
		write(1, &hexa[nb], 1);
	return (len(i));
}

int	ft_printhexaup(unsigned int nb)
{
	char			*hexa;
	unsigned int	i;

	i = nb;
	hexa = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_printhexaup(nb / 16);
		ft_printhexaup(nb % 16);
	}
	else
		write(1, &hexa[nb], 1);
	return (len(i));
}
