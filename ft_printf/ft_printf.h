/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:44:09 by ahans             #+#    #+#             */
/*   Updated: 2024/01/03 13:45:36 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <stdarg.h>
# include "../libft/libft.h"

typedef struct s_flags
{
	int			len;
	const char	*charac;
	int			err;
}	t_flags;

t_flags	arg_percent(t_flags *ret);
int		ft_printf(const char *format, ...);
int		ft_putstr(char *str, t_flags *ret);
t_flags	arg_p(unsigned long long ptr, t_flags *ret);
t_flags	arg_d(va_list arg, t_flags *ret);
t_flags	arg_s(va_list arg, t_flags *ret);
t_flags	arg_c(va_list arg, t_flags *ret);
t_flags	arg_x(int num, t_flags *ret, char min_maj);
t_flags	arg_u(unsigned int n, t_flags *ret);

#endif
