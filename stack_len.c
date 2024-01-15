/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:12:35 by ahans             #+#    #+#             */
/*   Updated: 2024/01/15 16:34:12 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack **stack)
{
	int		length;
	t_stack	*tmp;
	int		start;

	if (!stack)
		return (0);
	if (!(*stack))
		return (0);
	length = 2;
	tmp = *stack;
	start = tmp->value;
	tmp = tmp->next;
	while (start != tmp->value)
	{
		tmp = tmp->next;
		if (start == tmp->value)
			return (length);
		length++;
	}
	return (length - 1);
}
