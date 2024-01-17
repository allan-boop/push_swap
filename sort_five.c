/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:12:02 by ahans             #+#    #+#             */
/*   Updated: 2024/01/17 15:53:24 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	med;

	med = len / 2;
	while (len > 3)
	{
		if ((*stack_a)->index <= med)
		{
			pb(stack_a, stack_b);
			len--;
		}
		else
			ra(stack_a);
	}
	sort_three_a(stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		sb(*stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
