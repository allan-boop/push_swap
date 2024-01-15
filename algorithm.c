/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:06:30 by ahans             #+#    #+#             */
/*   Updated: 2024/01/15 17:26:58 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm(t_stack **stack_a, t_stack **stack_b, int len)
{
	if (len == 3)
		sort_three_a(stack_a);
	else if (len == 5)
		sort_five(stack_a, stack_b, len);
	else
		radix_sort(stack_a, stack_b);
	return ;
}
