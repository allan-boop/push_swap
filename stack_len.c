/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:12:35 by ahans             #+#    #+#             */
/*   Updated: 2024/01/05 19:13:07 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	if (!stack)
		return (0);
	i = 1;
	tmp = stack;
	while (tmp->prev != stack)
	{
		i++;
		tmp = tmp->prev;
	}
	return (i);
}
