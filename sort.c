/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:39:24 by ahans             #+#    #+#             */
/*   Updated: 2024/01/10 17:06:33 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_or_reverse(t_stack **stack, int *tab, int var, int step)
{
	int		i;
	int		x;
	t_stack	*tmp;

	tmp = *stack;
	i = 1;
	x = 0;
	while (i < stack_len(stack))
	{
		if (tmp->index == tab[0] || tmp->index == tab[1]
			|| tmp->index == tab[2])
		{
			x += i;
		}
		tmp = tmp->next;
		i++;
	}
	x -= var;
	x /= step;
	if (x <= stack_len(stack) / 2)
		return (1);
	return (0);
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int		tab[4];
	t_stack	*pos;
	int		var;
	int		step;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	while (*stack_a)
	{
		step = 3;
		tab[3] = 0;
		var = 0;
		pos = *stack_a;
		if (stack_len(stack_a) == 1 || stack_len(stack_a) == 2)
		{
			if ((*stack_a)->index > (*stack_a)->next->index)
				sa(*stack_a);
			break ;
		}
		while (tab[3] < 3)
		{
			if ((*stack_a)->index == tab[0]
				|| (*stack_a)->index == tab[1]
				|| (*stack_a)->index == tab[2])
			{
				var += (*stack_a)->index;
				if ((*stack_b) && (*stack_b)->next != *stack_b
					&& (*stack_a)->index < (*stack_b)->index
					&& (*stack_a)->index < (*stack_b)->next->index)
				{
					rb(stack_b);
					pb(stack_a, stack_b);
					sb(*stack_b);
					rrb(stack_b);
				}
				else
					pb(stack_a, stack_b);
				if ((*stack_b)->index < (*stack_b)->next->index)
					sb(*stack_b);
				tab[3]++;
				step--;
				pos = *stack_a;
			}
			else if (rotate_or_reverse(&pos, tab, var, step) == 1)
				ra(stack_a);
			else
				rra(stack_a);
		}
		tab[0] += 3;
		tab[1] += 3;
		tab[2] += 3;
	}
}
