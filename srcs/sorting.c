/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:31:13 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/16 13:56:50 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorted(t_stacks *stack)
{
	int	i;

	i = 0;
	while (i < stack->a_size - 1)
	{
		if (stack->stacka[i + 1] < stack->stacka[i])
			return ;
		i++;
	}
	_err(stack, "sorted");
}

void	sort3(t_stacks *stack)
{
	if (stack->stacka[0] > stack->stacka[1] && stack->stacka[1] \
		< stack->stacka[2] && stack->stacka[2] < stack->stacka[0])
		sa(stack);
	else if (stack->stacka[0] < stack->stacka[1] && stack->stacka[1] \
		< stack->stacka[2] && stack->stacka[2] > stack->stacka[0])
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->stacka[0] > stack->stacka[1] && stack->stacka[1] \
		< stack->stacka[2] && stack->stacka[2] > stack->stacka[0])
		ra(stack);
	else if (stack->stacka[0] < stack->stacka[1] && stack->stacka[1] \
		> stack->stacka[2] && stack->stacka[2] < stack->stacka[0])
	{
		sa(stack);
		ra(stack);
	}
	else if (stack->stacka[0] < stack->stacka[1] && stack->stacka[1] \
		> stack->stacka[2] && stack->stacka[2] > stack->stacka[0])
		rra(stack);
}

void	sort2(t_stacks *stack)
{
	sa(stack);
	finish(stack);
}

void	sort5(t_stacks *stack)
{
	stack->stackb = malloc(stack->a_size * sizeof(int));
	if (!stack->stackb)
		_err(stack, "memory allocation");
	while (stack->a_size != 3)
		min_to_top(stack);
	sort3(stack);
	while (stack->b_size != 0)
		pa(stack);
	finish(stack);
}

void	sort(t_stacks *stack)
{
	inverse_stack(stack->stacka, stack->a_size);
	if (stack->a_size == 2)
		sort2(stack);
	else if (stack->a_size == 3)
	{
		sort3(stack);
		finish(stack);
	}
	else if (stack->a_size > 3 && stack->a_size <= 5)
		sort5(stack);
	else
	{
		if (stack->a_size <= 100)
			large_sort(stack, 15);
		else if (stack->a_size <= 500)
			large_sort(stack, 30);
		finish(stack);
	}
}
