/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecano-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:33:30 by ecano-mo          #+#    #+#             */
/*   Updated: 2025/12/19 12:32:26 by ecano-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_formats(char format, va_list args);
int	ft_print_char(char c);
int	ft_print_string(const char *word);
int	ft_print_number(int nb);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, char format);
int	ft_print_ptr(void *ptr);
#endif
