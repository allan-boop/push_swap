/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:47:49 by ahans             #+#    #+#             */
/*   Updated: 2024/01/05 19:25:19 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

//t_stack				*create_stack(int ac, char **av);
//int					print_stack(t_stack *stack);
//int					ft_isnum(char *str);
//int					push(t_stack **stack, int value);
int			check_error(int ac, char **av);
int			stack_len(t_stack *stack);
t_stack		*fill_list(t_stack **stack_a, int ac, char **av);
void		ft_push(t_stack **stack, int value);

#endif
