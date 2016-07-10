/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 14:19:37 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 18:22:55 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_op(t_list_cir *l_a, t_list_cir *l_b, char *str)
{
	if (ft_strcmp("ra", str) == 0)
		ra(l_a);
	if (ft_strcmp("rra", str) == 0)
		rra(l_a);
	if (ft_strcmp("rb", str) == 0)
		rb(l_b);
	if (ft_strcmp("rrb", str) == 0)
		rrb(l_b);
	if (ft_strcmp("rr", str) == 0)
		rr(l_a, l_b);
	if (ft_strcmp("rrr", str) == 0)
		rrr(l_a, l_b);
	if (ft_strcmp("sa", str) == 0)
		sa(l_a);
	if (ft_strcmp("sb", str) == 0)
		sb(l_b);
	if (ft_strcmp("ss", str) == 0)
		ss(l_a, l_b);
	if (ft_strcmp("pa", str) == 0)
		pa(l_a, l_b);
	if (ft_strcmp("pb", str) == 0)
		pb(l_a, l_b);
}
