/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 01:13:38 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 14:00:56 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list_cir *l_a, t_list_cir *l_b)
{
	t_list_cir *tmp_a;
	t_list_cir *tmp_b;
	t_list_cir *tmp_b1;

	if (l_b->next != l_b)
	{
		tmp_b = l_b->next;
		tmp_a = l_a->next;
		tmp_b1 = tmp_b->next;
		l_a->next = tmp_b;
		tmp_b->previous = l_a;
		tmp_b->next = tmp_a;
		tmp_a->previous = tmp_b;
		l_b->next = tmp_b1;
		tmp_b1->previous = l_b;
	}
}

void	pb(t_list_cir *l_a, t_list_cir *l_b)
{
	t_list_cir *tmp_a;
	t_list_cir *tmp_a1;
	t_list_cir *tmp_b;

	if (l_a->next != l_a)
	{
		tmp_b = l_b->next;
		tmp_a = l_a->next;
		tmp_a1 = tmp_a->next;
		l_b->next = tmp_a;
		tmp_a->previous = l_b;
		tmp_a->next = tmp_b;
		tmp_b->previous = tmp_a;
		l_a->next = tmp_a1;
		tmp_a1->previous = l_a;
	}
}
