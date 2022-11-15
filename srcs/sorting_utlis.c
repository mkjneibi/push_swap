/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utlis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:35:21 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/15 15:36:22 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index(int *array, int size)
{
	int	x;
	int	i;
	int	j;

	j = 0;
	i = 0;
	x = array[0];
	while (i < size)
	{
		if (array[i] < x)
		{
			x = array[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	min_to_top(t_stacks *stack)
{
	int	j;
	int	i;
	j = min_index(stack->stacka, stack->a_size);
	i = j;
	if (j >= stack->a_size / 2)
		while (i++ < stack->a_size - 1)
			ra(stack);
	if (j < stack->a_size / 2)
		while (i-- > -1)
			rra(stack);
	pb(stack);
}

void	max_to_top(t_stacks *stack)
{
	int	j;
	int	i;

	j = max_index(stack->stackb, stack->b_size);
	i = j;
	if (j >= stack->b_size / 2)
		while (i++ < stack->b_size - 1)
			rb(stack);
	if (j < stack->b_size / 2)
		while (i-- > -1)
			rrb(stack);
	pa(stack);
}

int	max_index(int *array, int size)
{
	int	x;
	int	i;
	int	j;

	j = 0;
	i = 0;
	x = array[0];
	while (i < size)
	{
		if (array[i] > x)
		{
			x = array[i];
			j = i;
		}
		i++;
	}
	return (j);
}