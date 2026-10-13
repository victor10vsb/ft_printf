/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 03:07:11 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/13 17:19:32 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(unsigned int num)
{
	char			digit;
	int				count;

	count = 0;
	if (num > 9)
		count += ft_putnbr(num / 10);
	digit = (char)(num % 10 + '0');
	write(1, &digit, 1);
	count++;
	return (count);
}

int	ft_print_unsigned_int(va_list *args)
{
	unsigned int	num;
	int				count;

	num = va_arg(*args, unsigned int);
	count = ft_putnbr(num);
	return (count);
}
