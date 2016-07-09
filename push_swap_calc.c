/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_calc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 05:50:31 by ajubert           #+#    #+#             */
/*   Updated: 2016/06/25 17:12:50 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_swap_calc(t_e *e)
{
	int			nb_op_max;
//iint			nb_op;
//	t_list_cir	*tmp;
//	int			i;

//	nb_op = 1;
	nb_op_max = (0.000056 * ft_iterative_power(e->size_l, 3)) - (0.025 * ft_iterative_power(e->size_l, 2)) + (e->size_l * 9) - (e->size_l / 2);
	if (test_small_list(e))
		return (1);
	while (backtrack(e, nb_op_max) == 0)
		nb_op_max++;
	return (1);
}
