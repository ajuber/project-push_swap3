/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 23:16:56 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 14:31:26 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct			s_list_cir
{
	int					n;
	struct s_list_cir	*previous;
	struct s_list_cir	*next;
}						t_list_cir;

typedef	struct			s_list_str
{
	char				*str;
	struct s_list_str	*next;
	struct s_list_str	*previous;
}						t_list_str;

typedef	struct			s_v
{
	t_list_cir			*l_a;
	t_list_cir			*l_b;
	t_list_str			*str;
	int					nb_op;
	int					triee;
	int					size;
}						t_v;

typedef struct			s_e
{
	t_list_cir			*l_a;
	t_list_cir			*l_b;
	char				*str;
	int					v;
	int					size_l;
	int					size_lb;
	int					j;
	long				nb;
	int					rot;
	int					rev_rot;
	t_list_str			*l_str;
}						t_e;

t_list_cir				*ft_create_racine(void);
t_list_cir				*push_back_list(t_list_cir *begin_list, int nb);
void					ft_free_list_cir(t_list_cir *begin_list);
void					pa(t_list_cir *l_a, t_list_cir *l_b);
void					pb(t_list_cir *l_a, t_list_cir *l_b);
void					sa(t_list_cir *l_a);
void					sb(t_list_cir *l_b);
void					ss(t_list_cir *l_a, t_list_cir *l_b);
void					ra(t_list_cir *l_a);
void					rb(t_list_cir *l_b);
void					rr(t_list_cir *l_a, t_list_cir *l_b);
void					rra(t_list_cir *l_a);
void					rrb(t_list_cir *l_b);
void					rrr(t_list_cir *l_a, t_list_cir *l_b);
int						push_swap_calc(t_e *e, t_v *v);
void					display_list(t_e *e, int n);
int						test_a(t_e *e);
int						tri_a_and_b(t_e *e);
void					tri_b_and_a(t_e *e);
void					if_display(t_e *e, int n);
int						test_swap_a(t_e *e);
void					tri_small_list(t_e *e);
int						test_small_list(t_e *e);
void					tri_aa(t_e *e);
void					after_tri_aa(t_e *e);
int						what_ratation(t_list_cir *tmp_a, t_list_cir *tmp_b_next,
		t_list_cir *tmp_b_previous);
int						what_ratation2(t_list_cir *tmp_b,
		t_list_cir *tmp_a_next, t_list_cir *tmp_a_previous);
int						what_ratation2a(t_list_cir *tmp_a_next,
		t_list_cir *tmp_a_previous);
int						what_ratation2b(t_e *e, t_list_cir *tmp_b_next,
		t_list_cir *tmp_b_previous);
t_list_str				*ft_create_racine_str(void);
t_list_str				*push_back_str(t_list_str *begin_list, char *str);
void					ft_free_list_str(t_list_str *begin_list);
void					check_del(t_list_str *l_str);
void					display_result(t_list_str *l_str);
int						liste_triee(t_list_cir *l_a, t_list_cir *l_b);
void					del_last_maillon(t_list_str *begin);
int						backtrack(t_v *v, t_list_str ref[10], int nb_op_max);
void					del_last_op(t_list_cir *l_a, t_list_cir *l_b, char *str);
int						check_result_str(int *i, t_list_str ref[10], t_v *v);
int						check_anul(char *ref, char *prev);
int						check_not_op(t_list_cir *l_a, t_list_cir *l_b, char *str);
void					do_op(t_list_cir *l_a, t_list_cir *l_b, char *str);

#endif
