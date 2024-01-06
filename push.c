/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:13:07 by ahans             #+#    #+#             */
/*   Updated: 2024/01/06 16:33:12 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	extract_node(t_stack **stack, t_stack *tmp_stack)
{
	if ((*stack)->next == *stack)
		*stack = NULL;
	else
	{
		*stack = (*stack)->next;
		(*stack)->prev = tmp_stack->prev;
		(*stack)->prev->next = (*stack);
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_stack;

	if (!stack_b)
		return ;
	tmp_stack = *stack_b;
	extract_node(stack_b, tmp_stack);
	if (*stack_a == NULL)
	{
		*stack_a = tmp_stack;
		(*stack_a)->next = *stack_a;
		(*stack_a)->prev = *stack_a;
	}
	else
	{
		tmp_stack->next = *stack_a;
		tmp_stack->prev = (*stack_a)->prev;
		(*stack_a)->prev->next = tmp_stack;
		(*stack_a)->prev = tmp_stack;
		*stack_a = (*stack_a)->prev;
	}
	ft_printf("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_stack;

	if (!stack_a)
		return ;
	tmp_stack = *stack_a;
	extract_node(stack_a, tmp_stack);
	if (*stack_b == NULL)
	{
		*stack_b = tmp_stack;
		(*stack_b)->next = *stack_b;
		(*stack_b)->prev = *stack_b;
	}
	else
	{
		tmp_stack->next = *stack_b;
		tmp_stack->prev = (*stack_b)->prev;
		(*stack_b)->prev->next = tmp_stack;
		(*stack_b)->prev = tmp_stack;
		*stack_b = (*stack_b)->prev;
	}
	ft_printf("pb\n");
}
