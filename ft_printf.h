/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:17:58 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/13 19:24:28 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_print_string(va_list *args);
int	ft_print_char(va_list *args);
int	ft_print_number(va_list *args);
int	ft_print_unsigned_int(va_list *args);
int	ft_print_hex(va_list *args, char const *base);
int	ft_print_percentage(void);
int	ft_print_pointer(va_list *args);

#endif
