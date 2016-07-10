/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_a_and_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 17:10:51 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 15:02:46 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tri_a_and_b_next(t_e *e, t_list_cir *tmp, int comp, int comp1)
{
	if (comp > comp1 && comp1 > tmp->n)
	{
		sa(e->l_a);
		ft_putendl("sa");
		if_display(e, 1);
		rra(e->l_a);
		ft_putendl("rra");
		if_display(e, 1);
	}
	if (comp > comp1 && tmp->n > comp)
	{
		sa(e->l_a);
		ft_putendl("sa");
		if_display(e, 1);
	}
	if (comp1 > tmp->n && tmp->n > comp)
	{
		rra(e->l_a);
		ft_putendl("rra");
		if_display(e, 1);
		sa(e->l_a);
		ft_putendl("sa");
		if_display(e, 1);
	}
}

int		tri_a_and_b(t_e *e)
{
	t_list_cir	*tmp;
	int			comp;
	int			comp1;

	tmp = e->l_a->next;
	comp = tmp->n;
	tmp = tmp->next;
	comp1 = tmp->n;
	tmp = tmp->next;
	if (tmp->n > comp1 && comp1 > comp)
		return (0);
	if (comp1 > comp && comp > tmp->n)
	{
		rra(e->l_a);
		ft_putendl("rra");
		if_display(e, 1);
	}
	if (comp > tmp->n && tmp->n > comp1)
	{
		ra(e->l_a);
		ft_putendl("ra");
		if_display(e, 1);
	}
	tri_a_and_b_next(e, tmp, comp, comp1);
	return (1);
}

void	tri_b_and_a_next(t_e *e, t_list_cir *tmp, int comp, int comp1)
{
	if (comp > comp1 && comp1 > tmp->n)
	{
		sb(e->l_b);
		ft_putendl("sb");
		if_display(e, 1);
		rrb(e->l_b);
		ft_putendl("rrb");
		if_display(e, 1);
	}
	if (comp > comp1 && tmp->n > comp)
	{
		sb(e->l_b);
		ft_putendl("sb");
		if_display(e, 1);
	}
	if (comp > tmp->n && tmp->n > comp1)
	{
		rb(e->l_b);
		ft_putendl("rb");
		if_display(e, 1);
	}
}

void	tri_b_and_a(t_e *e)
{
	t_list_cir	*tmp;
	int			comp;
	int			comp1;

	tmp = e->l_b->next;
	comp = tmp->n;
	tmp = tmp->next;
	comp1 = tmp->n;
	tmp = tmp->next;
	if (comp1 > comp && comp > tmp->n)
	{
		rrb(e->l_b);
		ft_putendl("rrb");
		if_display(e, 1);
	}
	if (comp1 > tmp->n && tmp->n > comp)
	{
		rrb(e->l_b);
		ft_putendl("rrb");
		if_display(e, 1);
		sb(e->l_b);
		ft_putendl("sb");
		if_display(e, 1);
	}
	tri_b_and_a_next(e, tmp, comp, comp1);
}
