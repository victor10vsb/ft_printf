/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:48:32 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/13 18:12:48 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned int num, char const *base)
{
	char	digit;
	int		count;

	count = 0;
	if (num > 15)
		count += ft_put_hex(num / 16, base);
	digit = base[num % 16];
	write(1, &digit, 1);
	count++;
	return (count);
}

int	ft_print_hex(va_list *args, char const *base)
{
	unsigned int	num;
	int				count;

	num = va_arg(*args, unsigned int);
	count = ft_put_hex(num, base);
	return (count);
}
