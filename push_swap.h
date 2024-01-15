/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <ahans@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:47:49 by ahans             #+#    #+#             */
/*   Updated: 2024/01/15 17:45:24 by ahans            ###   ########.fr       */
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

int			check_error(int ac, char **av);
int			stack_len(t_stack **stack);
void		fill_list(t_stack **stack_a, int ac, char **av);
void		ft_push(t_stack **stack, int value);
void		fill_index(t_stack **stack, int len);
void		rra(t_stack **stack);
void		rrb(t_stack **stack);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack_a, t_stack *stack_b);
void		ra(t_stack **stack);
void		rb(t_stack **stack);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		sort_three_a(t_stack **stack);
void		algorithm(t_stack **stack_a, t_stack **stack_b, int len);
void		sort_five(t_stack **stack_a, t_stack **stack_b, int len);
void		print_stack_index(t_stack *stack);
void		radix_sort(t_stack **stack_a, t_stack **stack_b);
void		free_stack(t_stack **stack);

#endif
