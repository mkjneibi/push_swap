/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_utlis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:01:43 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/15 17:42:25 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	_err(t_stacks *stack, char *str)
{
	ft_putendl_fd(str, STDERR_FILENO);
	// we will need to add a free function same as so long
	// to free all things inside struct
	exit(EXIT_FAILURE);
}

void	finish(t_stacks *stack)
{
	// we will need to add a free function same as so long
	// to free all things inside struct
	exit(EXIT_SUCCESS);
}

void	_init(t_stacks *array, char **av)
{
	array->stacka = 0;
	array->stackb = 0;
	array->sstack = 0;
	array->s_size= 0;
	array->a_size = 0;
	array->b_size = 0;
	array->str = 0;
	array->av = av;
}