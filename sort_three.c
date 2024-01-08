/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:32:21 by ahans             #+#    #+#             */
/*   Updated: 2024/01/08 14:30:11 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_a(t_stack **stack)
{
	if ((*stack)->index == 3)
		ra(stack);
	else if ((*stack)->next->index == 3)
		rra(stack);
	if ((*stack)->index == 2 && (*stack)->next->index == 1)
		sa(*stack);
	return ;
}

void	sort_three_b(t_stack **stack)
{
	if ((*stack)->index == 3)
		rb(stack);
	else if ((*stack)->next->index == 3)
		rrb(stack);
	if ((*stack)->index == 2 && (*stack)->next->index == 1)
		sb(*stack);
	return ;
}
