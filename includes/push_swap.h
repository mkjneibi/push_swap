/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:45:24 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/16 14:23:47 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/includes/libft.h"
# include <unistd.h>

typedef struct s_stacks
{
	int		*stacka;
	int		a_size;
	int		*stackb;
	int		b_size;
	int		*sstack;
	int		s_size;
	char	**av;
	char	**str;
}		t_stacks;

void	_err(t_stacks *array, char *str);
void	finish(t_stacks *stack);
void	s_init(t_stacks *array, char **av);
void	all_num(char *str, t_stacks *stack);
int		dup_check(t_stacks stack, int value, int x);
int		ft_atoi_ps(const char *s, int *flag);
void	add_stack_a(t_stacks *stack);
void	inverse_stack(int *stack, size_t x);
void	ft_swap(int *a, int *b);
void	sa(t_stacks *stack);
void	sb(t_stacks *stack);
void	pa(t_stacks *stack);
void	pb(t_stacks *stack);
void	ra(t_stacks *stack);
void	rb(t_stacks *stack);
void	rra(t_stacks *stack);
void	rrb(t_stacks *stack);
int		min_index(int *array, int size);
int		max_index(int *array, int size);
void	min_to_top(t_stacks *stack);
void	max_to_top(t_stacks *stack);
void	sort(t_stacks *stack);
void	sorted(t_stacks *stack);
void	sort2(t_stacks *stack);
void	sort3(t_stacks *stack);
void	sort5(t_stacks *stack);
void	ft_arraydup(t_stacks *stack);
void	insertion_sort(t_stacks *stack);
void	large_sort(t_stacks *stack, int x);
void	stack_free(t_stacks *stack);

#endif