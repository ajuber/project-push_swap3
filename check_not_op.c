/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_not_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 11:56:13 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 13:06:14 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_not_op(t_list_cir *l_a, t_list_cir *l_b, char *str)
{
	t_list_cir *tmp;
	t_list_cir *tmp1;

	tmp = l_b->next;
	tmp1 = l_a->next;
	if (tmp == l_b && ft_strcmp("pa", str) == 0)
		return (1);
	if (tmp1 == l_a && ft_strcmp("pb", str) == 0)
		return (1);
	if ((tmp1 == l_a || tmp1->next == l_a) && (ft_strcmp("sa", str) == 0 || ft_strcmp("ra", str) == 0 || ft_strcmp("rra", str) == 0))
		return (1);
	if ((tmp == l_b || tmp->next == l_b) && (ft_strcmp("sb", str) == 0 || ft_strcmp("rb", str) == 0 || ft_strcmp("rrb", str) == 0))
		return (1);
	if (((tmp1 == l_a || tmp1->next == l_a) || (tmp == l_b || tmp->next == l_b) ) && (ft_strcmp("ss", str) == 0 || ft_strcmp("rr", str) == 0 || ft_strcmp("rrr", str) == 0))
		return (1);
	return (0);
}
