/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:39:24 by ahans             #+#    #+#             */
/*   Updated: 2024/01/08 16:31:29 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack **stack_a, t_stack **stack_b, int len)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	if ((*stack_b)->index < (*stack_b)->next->index)
		sb(*stack_b);
	while (*stack_a)
	{
		if ((*stack_a)->index < (*stack_b)->index && (*stack_a)->index > (*stack_b)->next->index)
		{
			rb(stack_b);
			pb(stack_a, stack_b);
			rrb(stack_b);
		}
		else if ((*stack_a)->index < (*stack_b)->prev->index)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
	}
}
