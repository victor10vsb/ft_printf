/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:11:31 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/13 19:21:12 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_pointer(unsigned long num)
{
	char	digit;
	int		count;

	count = 0;
	if (num > 15)
		count += ft_put_pointer(num / 16);
	digit = "0123456789abcdef"[num % 16];
	write(1, &digit, 1);
	count++;
	return (count);
}

int	ft_print_pointer(va_list *args)
{
	void			*ptr;
	unsigned long	num;
	int				count;

	ptr = va_arg(*args, void *);
	num = (unsigned long)ptr;
	write(1, "0x", 2);
	count = 2;
	count += ft_put_pointer(num);
	return (count);
}
