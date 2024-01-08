/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:06:30 by ahans             #+#    #+#             */
/*   Updated: 2024/01/08 14:41:20 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	algorithm(t_stack **stack_a, t_stack **stack_b, int len)
{
	if (len == 3)
		sort_three(stack_a);
	else
		sort(stack_a, stack_b, len);
	return ;
}
