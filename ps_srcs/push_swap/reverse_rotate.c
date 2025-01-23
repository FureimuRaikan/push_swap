/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fureimu <fureimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:53:07 by yguinio           #+#    #+#             */
/*   Updated: 2025/01/23 23:02:57 by fureimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_sclist **stack)
{
	*stack = ft_sclstlast(*stack);
}

void	rra(t_sclist **stack_a, int is_quiet)
{
	if (stack_a && (*stack_a))
	{
		reverse_rotate(stack_a);
		if (!is_quiet)
			ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(t_sclist **stack_b, int is_quiet)
{
	if (stack_b && (*stack_b))
	{
		reverse_rotate(stack_b);
		if (!is_quiet)
			ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(t_sclist **stack_a, t_sclist **stack_b, int is_quiet)
{
	if ((stack_a && *stack_a) || (stack_b && *stack_b))
		if (!is_quiet)
			ft_putstr_fd("rrr\n", 1);
	if (stack_a && *stack_a)
		reverse_rotate(stack_a);
	if (stack_b && *stack_b)
		reverse_rotate(stack_b);
}
