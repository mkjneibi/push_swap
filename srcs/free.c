/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:39:58 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/16 14:30:09 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_free(t_stacks *stack)
{
	int	i;

	i = 0;
	if (stack->sstack)
		free(stack->sstack);
	if (stack->stackb)
		free(stack->stackb);
	if (stack->stacka)
		free(stack->stacka);
	if (stack->str)
	{
		while (stack->str[i])
			free(stack->str[i++]);
		free(stack->str);
	}
}
