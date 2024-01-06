/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:12:43 by ahans             #+#    #+#             */
/*   Updated: 2024/01/06 15:12:48 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp_val;
	int	tmp_index;

	if (!stack || !stack->next)
		return ;
	tmp_val = stack->value;
	tmp_index = stack->index;
	stack->value = stack->next->value;
	stack->next->value = tmp_val;
	stack->index = stack->next->index;
	stack->next->index = tmp_index;
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	int	tmp_val;
	int	tmp_index;

	if (!stack || !stack->next)
		return ;
	tmp_val = stack->value;
	tmp_index = stack->index;
	stack->value = stack->next->value;
	stack->next->value = tmp_val;
	stack->index = stack->next->index;
	stack->next->index = tmp_index;
	ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp_val;
	int	tmp_index;

	if (!stack_a || !stack_a->next || !stack_b || !stack_b->next)
		return ;
	tmp_val = stack_a->value;
	tmp_index = stack_a->index;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = tmp_val;
	stack_a->index = stack_a->next->index;
	stack_a->next->index = tmp_index;

	tmp_val = stack_b->value;
	tmp_index = stack_b->index;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = tmp_val;
	stack_b->index = stack_b->next->index;
	stack_b->next->index = tmp_index;
	ft_printf("ss\n");
}
