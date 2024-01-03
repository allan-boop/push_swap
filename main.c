/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:47:58 by ahans             #+#    #+#             */
/*   Updated: 2024/01/02 17:20:33 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac < 2)
	{
		return (0);
	}
	stack = create_stack(ac, av);
	if (!stack)
	{
		return (0);
	}
	print_stack(stack);
	return (0);
}

int	print_stack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	return (1);
}

t_stack	*create_stack(int ac, char **av)
{
	t_stack	*stack;
	int		i;

	i = 1;
	stack = NULL;
	while (i < ac)
	{
		if (!ft_isnum(av[i]))
		{
			return (NULL);
		}
		push(&stack, ft_atoi(av[i]));
		i++;
	}
	return (stack);
}