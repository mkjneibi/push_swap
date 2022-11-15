/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:47:16 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/12 17:59:24 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stacks *stack)
{
    int x;

    x = stack->a_size - 1;
    while (x != 0)
    {
        ft_swap(&stack->stacka[x], &stack->stacka[x - 1]);
        x--;
    }
    ft_printf("ra\n");
}

void    rb(t_stacks *stack)
{
    int x;

    x = stack->b_size - 1;
    while (x != 0)
    {
        ft_swap(&stack->stackb[x], &stack->stackb[x - 1]);
        x--;
    }
    ft_printf("rb\n");
}

void    rra(t_stacks *stack)
{
    int x;

    x = 0;
    while (x < stack->a_size - 1)
    {
        ft_swap(&stack->stacka[x], &stack->stacka[x + 1]);
        x++;
    }
    ft_printf("rra\n");
}

void    rrb(t_stacks *stack)
{
    int x;

    x = 0;
    while (x < stack->b_size - 1)
    {
        ft_swap(&stack->stackb[x], &stack->stackb[x + 1]);
        x++;
    }
    ft_printf("rrb\n");
}