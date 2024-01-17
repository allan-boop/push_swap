/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:20:07 by ahans             #+#    #+#             */
/*   Updated: 2024/01/17 15:42:26 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **stack)
{
	if (!stack)
		return ;
	if (!(*stack))
		return ;
	if ((*stack)->value > (*stack)->next->value)
		sa(*stack);
}
