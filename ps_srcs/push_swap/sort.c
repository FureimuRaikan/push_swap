/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fureimu <fureimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:08:15 by yguinio           #+#    #+#             */
/*   Updated: 2025/01/23 23:02:57 by fureimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_sclist **stack_a, t_sclist **stack_b)
{
	if (ft_issorted(*stack_a))
		return ;
	if (ft_sclst_size(*stack_a) <= 3)
	{
		ft_sort_three(stack_a);
		return ;
	}
	else
		ft_sort_big(stack_a, stack_b);
}
