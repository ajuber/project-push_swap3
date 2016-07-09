#include "push_swap.h"

int		backtrack()
{
	if ((liste_triee(t_e *e, nb_op)))
		return (1);
	if (check_result_str() != 0)
	{
		create_result_str();
		if (backtrack() != 0)
			return (1);
		del_last_op();
		del_last_maillon();
	}
	return (0);
}
