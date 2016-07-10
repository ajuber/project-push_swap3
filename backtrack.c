#include "push_swap.h"

int		backtrack()
{
	int i;

	i = 1;
	if ((liste_triee(t_e *e, nb_op)))
		return (1);
	while (i < 12)
	{
		if (check_result_str(&i) != 0)
		{
			create_result_str();
			if (backtrack() != 0)
				return (1);
			del_last_op();
			del_last_maillon();
		}
		i++;
	}
	return (0);
}
