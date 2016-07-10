/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 09:58:27 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 18:54:18 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		backtrack(t_v *v, t_list_str ref[10], int nb_op_max)
{
	int i;

	i = 0;
	if ((liste_triee(v->l_a, v->l_b)))
	{
		return (1);
	}
	while (i < 11 && v->size < nb_op_max)
	{
		if (check_result_str(&i, ref, v) != 0)
		{
			push_back_str(v->str, ref[i].str);
			do_op(v->l_a, v->l_b, ref[i].str);
			v->size++;
			if (backtrack(v, ref, nb_op_max) != 0)
				return (1);
			del_last_op(v->l_a, v->l_b, ref[i].str);
			del_last_maillon(v->str);
			v->size--;
		}
		i++;
	}
	return (0);
}
