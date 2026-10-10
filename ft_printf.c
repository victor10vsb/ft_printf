/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:17:14 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/10 20:05:34 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_process_conversion(char const *format, va_list *args, int *i)
{
	int	count;

	count = 0;
	if (format[*i + 1] == '%')
	{
		write(1, "%", 1);
		count = 1;
	}
	else if (format[*i + 1] == 's')
		count = ft_print_string(args);
	else if (format[*i + 1] == 'c')
		count = ft_print_char(args);
	else if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
		count = ft_print_number(args);
	else
		return (-1);
	*i += 2;
	return (count);
}

static int	ft_process_format(char const *format, va_list *args, int *i)
{
	int	count;

	count = 0;
	if (format[*i] == '%' && format[*i + 1])
	{
		count = ft_process_conversion(format, args, i);
		if (count >= 0)
			return (count);
	}
	write(1, &format[*i], 1);
	(*i)++;
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
		count += ft_process_format(format, &args, &i);
	va_end(args);
	return (count);
}
