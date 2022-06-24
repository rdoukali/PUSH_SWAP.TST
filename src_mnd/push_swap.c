/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:16:31 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/24 19:50:37 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_tab(char **av, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = ft_atoi(av[i + 1]);
		i++;
	}
	return (tab);
}

int	*fill_all(char *av, int *size)
{
	int	i;
	int	start;
	int	end;
	int	k;
	int	j;
	char	*ptr;
	int	*tab;

	i = 0;
	k = 0;
	*size = count(av);
	tab = malloc(sizeof(int) * count(av));
	while (k < count(av))
	{
		if ((av[i] >= '0' && av[i] <= '9') || av[i] == '-' || av[i] == '+')
			start = i;
		if (av[i] == '-' || av[i] == '+')
			i++;
		while (av[i] >= '0' && av[i] <= '9')
			i++;
		end = i;
		ptr = malloc(sizeof(char) * end - start + 1);
		j = 0;
		while (start < end)
		{
			ptr[j] = av[start];
			start++;
			j++;
		}
		ptr[j] = '\0';
		tab[k] = ft_atoi(ptr);
		free(ptr);
		k++;
		i++;
	}
	return (tab);
}

int main(int ac, char **av)
{
	int	i;
	int	*a;
	int	*b;
	int	s1;
	int	s2;

	i = 0;
	s2 = 0;
	s1 = count_all(ac, av);
	if (s1 < 1)
		ft_error(s1);
	a = fill_in(ac - 1, av);
	check_dup(a, s1);
	b = malloc(sizeof(int) * 0);
	if (a_order(a, s1) == 1)
		return (0);
	if (s1 > 250)
		all_2000(a, b, &s1, &s2);
	else if (s1 > 20)
		all_100(a, b, &s1, &s2);
	else if (s1 > 3)
		all_20(a, b, &s1, &s2);
	else
		order(a, s1);
	// while(i < s1)
	// {
	//	 printf("[%d] ", a[i]);
	//	 i++;
	// }
	// i = 0;
	// printf("\n---------------------------------------------------------------------\n");
	// while(i < s2)
	// {
	//	 printf("[%d] ", b[i]);
	//	 i++;
	//  }
	free(a);
	free(b);
	//system("leaks push_swap");
	return (0);
}
