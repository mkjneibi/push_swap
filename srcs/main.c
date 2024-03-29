/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:01:01 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/16 14:23:23 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stacks	stack;

	if (ac != 2)
		return (1);
	s_init(&stack, av);
	stack.a_size = count_words(av[1], ' ');
	stack.s_size = count_words(av[1], ' ');
	all_num(av[1], &stack);
	add_stack_a(&stack);
	sorted(&stack);
	sort(&stack);
	return (0);
}
