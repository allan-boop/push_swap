/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:32:21 by ahans             #+#    #+#             */
/*   Updated: 2024/01/15 17:29:22 by ahans            ###   ########.fr       */
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
