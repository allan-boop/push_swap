/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:10:46 by ahans             #+#    #+#             */
/*   Updated: 2024/01/05 20:51:13 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack_index(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	tmp = stack;
	while (tmp->next != stack)
	{
		printf("value: %d, index: %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
	printf("value: %d, index: %d\n", tmp->value, tmp->index);
	return ;
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	//t_stack	*stack_b;

	stack_a = NULL;
	check_error(ac, av);
	fill_list(&stack_a, ac, av);
	fill_index(&stack_a, stack_len(stack_a));
	print_stack_index(stack_a);
	return (0);
}
