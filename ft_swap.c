/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 02:47:13 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 14:07:02 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list_cir *l_a)
{
	t_list_cir	*tmp_a;
	int			tmp;
	int			tmp1;

	tmp_a = l_a->next;
	if (l_a != tmp_a && l_a != tmp_a->next)
	{
		tmp = tmp_a->n;
		tmp_a = tmp_a->next;
		tmp1 = tmp_a->n;
		tmp_a->n = tmp;
		tmp_a = tmp_a->previous;
		tmp_a->n = tmp1;
	}
}

void	sb(t_list_cir *l_b)
{
	t_list_cir	*tmp_a;
	int			tmp;
	int			tmp1;

	tmp_a = l_b->next;
	if (l_b != tmp_a && l_b != tmp_a->next)
	{
		tmp = tmp_a->n;
		tmp_a = tmp_a->next;
		tmp1 = tmp_a->n;
		tmp_a->n = tmp;
		tmp_a = tmp_a->previous;
		tmp_a->n = tmp1;
	}
}

void	ss(t_list_cir *l_a, t_list_cir *l_b)
{
	sa(l_a);
	sb(l_b);
}
