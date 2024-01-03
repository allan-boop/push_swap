/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:10:46 by ahans             #+#    #+#             */
/*   Updated: 2024/01/03 15:12:27 by ahans            ###   ########.fr       */
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


int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	push(t_stack **stack, int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
	{
		return (0);
	}
	new->value = value;
	new->next = *stack;
	*stack = new;
	return (1);
}
