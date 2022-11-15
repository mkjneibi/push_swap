/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:34:07 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/15 16:16:51 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_arraydup(t_stacks *stack)
{
	int   i;

	i = 0;
	stack->sstack = malloc(stack->s_size * sizeof(int));
	if (!stack->sstack)
		return ;
	while (i < stack->s_size)
	{
		stack->sstack[i] = stack->stacka[i];
		i++;
	}
}

void	insertion_sort(t_stacks *stack)
{
	int	i;
	int key;
	int j;

	i = 1;
	while (i < stack->s_size)
	{
		j = i - 1;
		key = stack->sstack[i];
		while (j >= 0 && stack->sstack[j] > key)
		{
			stack->sstack[j + 1] = stack->sstack[j];
			j = j - 1;
		}
		stack->sstack[j + 1] = key;
		i++;
	}
}

void	large_sort(t_stacks *stack)
{
	ft_arraydup(stack);
	insertion_sort(stack);
	int i = 0;
	int x = 15;
	while (stack->a_size != 0)
	{
		if (stack->stacka[stack->a_size - 1] <= stack->sstack[i])
		{
			pb(stack);
			i++;
		}
		if ((i + x) >= stack->a_size)
			x--;
		else if (stack->stacka[stack->a_size - 1] <= stack->sstack[i + x])
		{
			pb(stack);
			rb(stack);
			i++;
		}
		else
			ra(stack);
		printf("hello");
		// if (i >= stack->s_size)
	}
	while (stack->b_size)
		max_to_top(stack);
}
