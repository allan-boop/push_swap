/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:20:07 by ahans             #+#    #+#             */
/*   Updated: 2024/01/05 23:04:50 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	affect_tmp(t_stack *tmp_stack, int len, int *tmp)
{
	int	j;

	j = 0;
	tmp = tmp;
	while (j < len)
	{
		if (!tmp_stack->index)
			*tmp = tmp_stack->value;
		tmp_stack = tmp_stack->next;
		j++;
	}
}

void	affect_index(t_stack **tmp_stack, int len, int i, int tmp)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if ((*tmp_stack)->value == tmp && !(*tmp_stack)->index)
			(*tmp_stack)->index = i;
		j++;
		*tmp_stack = (*tmp_stack)->next;
	}
}

void	fill_index(t_stack **stack, int len)
{
	int		i;
	int		tmp;
	t_stack	*tmp_stack;
	int		j;

	i = 1;
	while (i <= len)
	{
		j = 0;
		tmp_stack = *stack;
		affect_tmp(tmp_stack, len, &tmp);
		while (j < len)
		{
			if (tmp_stack->value < tmp && !tmp_stack->index)
				tmp = tmp_stack->value;
			tmp_stack = tmp_stack->next;
			j++;
		}
		affect_index(&*stack, len, i, tmp);
		tmp_stack = *stack;
		i++;
	}
}
