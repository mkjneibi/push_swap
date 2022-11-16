/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:51:53 by mealjnei          #+#    #+#             */
/*   Updated: 2022/11/16 13:55:36 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// this function will check for the first if statement
// if everything is number or -/+
// the second if statement will check if there is
// a - coming after a digit or between two digits

void	all_num(char *m, t_stacks *stack)
{
	int	x;

	x = 0;
	while (m[x])
	{
		if (!ft_isdigit(m[x]) && m[x] != ' '
			&& m[x] != '-' && m[x] != '+' && m[x])
			_err(stack, "There's error in input char");
		if ((m[x] == '-' || m[x] == '+') && m[x - 1] != ' ' && m[x - 1])
			_err(stack, "There's error in input -/+ wrong");
		x++;
	}
}
// to find duplicates in (stack a) giving the structure and the value to
// check for and the size of the current (stack a) from the index
// that split at

int	dup_check(t_stacks stack, int value, int x)
{
	int	i;

	i = 0;
	while (i <= x)
	{
		if (stack.stacka[i] == value)
			return (1);
		i++;
	}
	return (0);
}

// atoi with a bit of twist to check for max number and min number
// so if we hit any of theses we will set flag to 1
int	ft_atoi_ps(const char *s, int *flag)
{
	int				mk;
	size_t			ab;
	int				sign;

	mk = 0;
	ab = 0;
	sign = 1;
	while (s[mk] == ' ' || s[mk] == '\n' || s[mk] == '\f' || s[mk] == '\t' || \
			s[mk] == '\r' || s[mk] == '\v')
		mk++;
	if (s[mk] == '-' || s[mk] == '+')
	{
		if (s[mk] == '-')
			sign *= -1;
		mk++;
	}
	while (s[mk] >= '0' && s[mk] <= '9')
		ab = ab * 10 + (s[mk++] - '0');
	if (ab > 2147483647 && sign == 1)
		*flag = 1;
	if (ab > 2147483648 && sign == -1)
		*flag = 1;
	return (ab * sign);
}

// this function will first allocate memory for the stack a
// and do split for the set of numbers in argument 1 which
// is "2 3 4 5" and split it with ' ' after that we will enter
// a while loop that will loop with a_size which is the number
// of numbers inside the argmuent and then use out atoi and pass
// each number from the splitted that will be a number and the address
// of flag because we will change the value of flag inside the atoi so
// we passed it with address and the result of split will be set to stack a
// and moving on from 0 until the end of our a_size then we have the if statement
// first we will check for duplicates andif the flag is set to 1

void	add_stack_a(t_stacks *stack)
{
	int	x;
	int	flag;

	x = 0;
	flag = 0;
	stack->stacka = malloc(sizeof(int) * stack->a_size);
	if (!stack->stacka)
		_err(stack, "Not enough memory");
	stack->str = ft_split(stack->av[1], ' ');
	if (!stack->str)
		_err(stack, "Not enough memory");
	while (x < stack->a_size)
	{
		stack->stacka[x] = ft_atoi_ps(stack->str[x], &flag);
		if (flag == 1)
			_err(stack, "big number");
		if (dup_check(*stack, stack->stacka[x], x - 1))
			_err(stack, "Duplicate value");
		x++;
	}
	// [-28,0,3,214,28,?]
	// [0,1,2,3,4,5]
	// to print the stack a
}

void	inverse_stack(int *stack, size_t x)
{
	static size_t	i;

	if (i < x)
	{
		ft_swap(&stack[i], &stack[x - 1]);
		i++;
		inverse_stack(stack, x - 1);
	}
	i = 0;
}
