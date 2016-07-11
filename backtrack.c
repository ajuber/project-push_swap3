/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 09:58:27 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/11 14:58:22 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		backtrack(t_v *v, t_str ref[11], int nb_op_max)
{
	int i;

	i = 0;
	if ((liste_triee(v->l_a, v->l_b)))
	{
		return (1);
	}
	while (i < 11 && v->size < nb_op_max)
	{
		if (check_result_str(&i, ref, v, v->size - 1) != 0)
		{
			v->tab_op[v->size].ind = i;
			do_op(v->l_a, v->l_b, ref[i].str);
			v->size++;
			if (backtrack(v, ref, nb_op_max) != 0)
				return (1);
			del_last_op(v->l_a, v->l_b, ref[i].str);
			v->tab_op[v->size].ind = -1;
			v->size--;
		}
		i++;
	}
	return (0);
}
