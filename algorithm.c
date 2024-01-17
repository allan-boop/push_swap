/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:06:30 by ahans             #+#    #+#             */
/*   Updated: 2024/01/17 16:16:17 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (i < stack_len(stack) - 1)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
		i++;
	}
	return (1);
}

void	algorithm(t_stack **stack_a, t_stack **stack_b, int len)
{
	if (is_sorted(stack_a) == 1)
		return ;
	if (len == 2)
		sort_two(stack_a);
	else if (len == 3)
		sort_three_a(stack_a);
	else if (len == 4)
		sort_four(stack_a, stack_b);
	else if (len == 5)
		sort_five(stack_a, stack_b, len);
	else
		radix_sort(stack_a, stack_b);
	return ;
}
