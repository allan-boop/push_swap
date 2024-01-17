/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:17:05 by ahans             #+#    #+#             */
/*   Updated: 2024/01/17 16:31:58 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->index == 1)
		pb(stack_a, stack_b);
	else
	{
		while ((*stack_a)->index != 1)
			ra(stack_a);
		if ((*stack_a)->index == 1)
			pb(stack_a, stack_b);
	}
	sort_three_a(stack_a);
	pa(stack_a, stack_b);
}
