/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:22:53 by ahans             #+#    #+#             */
/*   Updated: 2024/01/05 20:28:37 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **stack, int value)
{
	t_stack	*new;
	t_stack	*last;

	new = ft_calloc(1, sizeof(t_stack));
	if (!new)
		return ;
	new->value = value;
	new->next = new;
	new->prev = new;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	last = (*stack)->prev;
	new->prev = (*stack)->prev;
	new->next = *stack;
	(*stack)->prev = new;
	last->next = new;
}

void	fill_list(t_stack **stack_a, int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_push(stack_a, ft_atol(av[i]));
		i++;
	}
	return ;
}
