/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 13:58:30 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/13 17:19:16 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(long num)
{
	char	digit;
	int		count;

	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	if (num > 9)
		count += ft_putnbr(num / 10);
	digit = (char)(num % 10 + '0');
	write(1, &digit, 1);
	count++;
	return (count);
}

int	ft_print_number(va_list *args)
{
	long	num;
	int		count;

	num = va_arg(*args, int);
	count = ft_putnbr(num);
	return (count);
}
