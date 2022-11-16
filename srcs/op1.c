/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:03:40 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/16 13:51:55 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sa(t_stacks *stack)
{
	if (stack->a_size <= 1)
		return ;
	ft_swap(&stack->stacka[stack->a_size - 1], \
	&stack->stacka[stack->a_size - 2]);
	ft_printf("sa\n");
}

void	sb(t_stacks *stack)
{
	if (stack->b_size <= 1)
		return ;
	ft_swap(&stack->stackb[stack->b_size - 1], \
	&stack->stackb[stack->b_size - 2]);
	ft_printf("sb\n");
}

void	pa(t_stacks *stack)
{
	if (stack->b_size == 0)
		return ;
	stack->stacka[stack->a_size++] = stack->stackb[--stack->b_size];
	ft_printf("pa\n");
}

void	pb(t_stacks *stack)
{
	if (stack->a_size == 0)
		return ;
	stack->stackb[stack->b_size++] = stack->stacka[--stack->a_size];
	ft_printf("pb\n");
}
