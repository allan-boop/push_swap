/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:39:24 by ahans             #+#    #+#             */
/*   Updated: 2024/01/10 14:55:46 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_or_reverse(t_stack **stack, int *tab)
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
	x /= 3;
	if (x <= stack_len(stack) / 2)
		return (1);
	return (0);
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	tab[4];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	while (*stack_a)
	{
		tab[4] = 0;
		if (stack_len(stack_a) == 1 || stack_len(stack_a) == 2)
		{
			if ((*stack_a)->index > (*stack_a)->next->index)
				sa(*stack_a);
			break ;
		}
		else if (rotate_or_reverse(stack_a, tab) == 1)
		{
			while (tab[4] < 3)
			{
				if ((*stack_a)->index == tab[0]
					|| (*stack_a)->index == tab[1]
					|| (*stack_a)->index == tab[2])
				{
					if ((*stack_b) && (*stack_b)->next != *stack_b && (*stack_a)->index < (*stack_b)->index && (*stack_a)->index < (*stack_b)->next->index)
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
					tab[4]++;
				}
				else
					ra(stack_a);
			}
		}
		else
		{
			while (tab[4] < 3)
			{
				if ((*stack_a)->index == tab[0]
					|| (*stack_a)->index == tab[1]
					|| (*stack_a)->index == tab[2])
				{
					if ((*stack_b) && (*stack_b)->next != *stack_b && (*stack_a)->index < (*stack_b)->index && (*stack_a)->index < (*stack_b)->next->index)
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
					tab[4]++;
				}
				else
					rra(stack_a);
			}
		}
		tab[0] += 3;
		tab[1] += 3;
		tab[2] += 3;
	}
}
