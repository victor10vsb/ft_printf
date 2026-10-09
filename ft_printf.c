/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:17:14 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/09 21:27:34 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	int	i;

	i = 0;
	while (format[i])
	{
		write(1, &format[i], 1);
		i++;
	}
	return (i);
}

int main(void)
{
	ft_printf("hola");
}
