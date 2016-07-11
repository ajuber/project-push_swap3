/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_calc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 05:50:31 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/11 14:57:52 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_swap_calc(t_e *e, t_v *v)
{
	int			nb_op_max;
	t_str		ref[11];
//	int i;
	//t_list_str	*tmp;
//iint			nb_op;
//	int			i;

//	nb_op = 1;
	nb_op_max = (0.000056 * ft_iterative_power(e->size_l, 3)) - (0.025 * ft_iterative_power(e->size_l, 2)) + (e->size_l * 9) - (e->size_l / 2);
//	if (test_small_list(e))
//		return (1);
	ref[0].str = ft_strdup("ra");
	ref[1].str = ft_strdup("rb");
	ref[2].str = ft_strdup("rra");
	ref[3].str = ft_strdup("rrb");
	ref[4].str = ft_strdup("rr");
	ref[5].str = ft_strdup("rrr");
	ref[6].str = ft_strdup("sa");
	ref[7].str = ft_strdup("sb");
	ref[8].str = ft_strdup("ss");
	ref[9].str = ft_strdup("pa");
	ref[10].str = ft_strdup("pb");
	v->size = 0;
	if (!(v->tab_op = (t_str *)malloc(sizeof(t_str) * nb_op_max)))
		return (0);
	while (backtrack(v, ref, nb_op_max) == 0)
	{
		nb_op_max += e->size_l / 2;
		ft_memdel((void **)&v->tab_op);
		if (!(v->tab_op = (t_str *)malloc(sizeof(t_str) * nb_op_max)))
			return (0);
	}
	ft_resolv(v->tab_op, v->size);
	return (1);
}
