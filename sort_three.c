/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:32:21 by ahans             #+#    #+#             */
/*   Updated: 2024/01/09 13:05:15 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_a(t_stack **stack)
{
	if ((*stack)->index > (*stack)->next->index
		&& (*stack)->index > (*stack)->next->next->index)
		ra(stack);
	else if ((*stack)->next->index > (*stack)->index
		&& (*stack)->next->index > (*stack)->next->next->index)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(*stack);
	return ;
}

void	sort_three_b(t_stack **stack)
{
	if ((*stack)->index < (*stack)->next->index
		&& (*stack)->index < (*stack)->next->next->index)
		rb(stack);
	else if ((*stack)->next->index < (*stack)->index
		&& (*stack)->next->index < (*stack)->next->next->index)
		rrb(stack);
	if ((*stack)->index < (*stack)->next->index)
		sb(*stack);
	return ;
}
