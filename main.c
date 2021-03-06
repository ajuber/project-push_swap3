/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 23:26:40 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/11 11:27:15 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_option(char **argv, t_e *e, int *i, int argc)
{
	if (ft_strcmp("-v", argv[1]) == 0)
		e->v = 1;
	else
		e->v = 0;
	*i = 1 + e->v;
	if (*i == argc)
		return (0);
	return (1);
}

t_list_cir		*ft_create_list(char **argv, t_e *e, int argc)
{
	int			i;
	t_list_cir	*l_a;

	l_a = NULL;
	if (!(ft_option(argv, e, &i, argc)))
		return (NULL);
	if (!(l_a = ft_create_racine()))
		return (NULL);
	while (i < argc)
	{
		e->j = 0;
		if (argv[i][e->j] == '-')
			e->j++;
		if (argv[i][e->j] == '\0')
			return (NULL);
		while (argv[i][e->j])
		{
			if (!(ft_isdigit(argv[i][e->j])))
				return (NULL);
			e->j++;
		}
		e->nb = ft_atoi_long(argv[i]);
		if (e->nb < -2147483648 || e->nb > 2147483647)
			return (NULL);
		push_back_list(l_a, e->nb);
		i++;
	}
	e->size_l = i - 1 - e->v;
	return (l_a);
}

int				ft_check_doublon(t_e *e)
{
	t_list_cir *tmp;
	t_list_cir *tmp1;

	tmp = e->l_a->next;
	while (tmp != e->l_a)
	{
		tmp1 = tmp->next;
		while (tmp1 != e->l_a)
		{
			if (tmp->n == tmp1->n)
				return (0);
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
	return (1);
}

void			main_next(t_e *e, t_v *v)
{
	push_swap_calc(e, v);
//	check_del(e->l_str);
	if (e->v)
		ft_putendl("Operation effectue");
	display_result(v->tab_op, v->size);
	ft_free_list_cir(e->l_a);
	ft_free_list_cir(e->l_b);
}

int				main(int argc, char **argv)
{
	t_e		e;
	t_v		v;

	if (argc == 1)
		return (0);
	e.l_a = ft_create_list(argv, &e, argc);
	v.l_a = ft_create_list(argv, &e, argc);
	e.l_b = ft_create_racine();
	v.l_b = ft_create_racine();
	if (e.l_a == NULL || e.l_b == NULL || v.l_a == NULL || v.l_b == NULL ||
			(!(ft_check_doublon(&e))))
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	if (e.v)
	{
		ft_putendl("\nListe debut\n");
		display_list(&e, 1);
		ft_putendl("Etat liste pendant les operation\n");
	}
	main_next(&e, &v);
	return (0);
}
