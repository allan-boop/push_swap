/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:10:46 by ahans             #+#    #+#             */
/*   Updated: 2024/01/05 19:26:51 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	//t_stack	*stack_b;

	stack_a = NULL;
	check_error(ac, av);
	stack_a = fill_list(&stack_a, ac, av);

	return (0);
}
