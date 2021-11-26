/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:58:00 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/26 01:46:26 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_printf(const char *s, ...);
int	ft_putnbr2(unsigned int n);
int	ft_putnbr(int nb);
int	ft_printhexaup(unsigned int nb);
int	ft_printhexalow(unsigned int nb);
int	ft_adress(unsigned long nb);
int	len(int long nb);
int	len2(unsigned long nb);
int	ft_print_adress(unsigned long nb);
#endif