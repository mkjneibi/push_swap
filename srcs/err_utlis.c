/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_utlis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:01:43 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/16 14:24:33 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	_err(t_stacks *stack, char *str)
{
	ft_putendl_fd(str, STDERR_FILENO);
	stack_free(stack);
	exit(EXIT_FAILURE);
}

void	finish(t_stacks *stack)
{
	stack_free(stack);
	exit(EXIT_SUCCESS);
}

void	s_init(t_stacks *array, char **av)
{
	array->stacka = 0;
	array->stackb = 0;
	array->sstack = 0;
	array->s_size = 0;
	array->a_size = 0;
	array->b_size = 0;
	array->str = 0;
	array->av = av;
}