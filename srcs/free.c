/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:39:58 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/16 12:51:08 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    free_double_pointer(char ***ptr)
{
    int i;

    i = 0;
    while (*ptr[i])
    {
        free(*ptr[i]);
        i++;
    }
}

void    stack_free(t_stacks *stack)
{
    if (stack->sstack)
    {
        free(stack->sstack);
        stack->sstack = NULL;
    }
    if (stack->stackb)
    {
        free(stack->stackb);
        stack->stackb = NULL;
    }
    if (stack->stacka)
    {
        free(stack->stacka);
        stack->stacka = NULL;
    }
    if (stack->str)
    {
        free_double_pointer(&stack->str);
        stack->str = NULL;
    }
}
