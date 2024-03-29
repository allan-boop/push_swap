/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:10:46 by ahans             #+#    #+#             */
/*   Updated: 2024/01/17 15:55:20 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	check_error(ac, av);
	fill_list(&stack_a, ac, av);
	fill_index(&stack_a, stack_len(&stack_a));
	algorithm(&stack_a, &stack_b, stack_len(&stack_a));
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
