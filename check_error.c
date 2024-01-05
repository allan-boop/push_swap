/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:01:55 by ahans             #+#    #+#             */
/*   Updated: 2024/01/05 16:02:29 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				ft_putstr_fd("Error\n", 2);
				exit (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_max(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atol(av[i]) > 2147483647 || ft_atol(av[i]) < -2147483648)
		{
			ft_putstr_fd("Error max\n", 2);
			exit (0);
		}
		i++;
	}
	return (0);
}

int	check_int(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] == '-' || av[i][j] == '+') && j == 0)
				j++;
			if (!ft_isdigit(av[i][j]))
			{
				ft_putstr_fd("Error not int\n", 2);
				exit (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_error(int ac, char **av)
{
	check_double(ac, av);
	check_int(ac, av);
	check_max(ac, av);
	return (0);
}
