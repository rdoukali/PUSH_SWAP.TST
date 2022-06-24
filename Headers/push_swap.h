/* ************************************************************************** */
/*																																						*/
/*																												:::		  ::::::::   */
/*   push_swap.h																				:+:		  :+:		:+:   */
/*																										+:+ +:+				 +:+		 */
/*   By: rdoukali <rdoukali@student.42.fr>				  +#+  +:+		   +#+				*/
/*																								+#+#+#+#+#+   +#+				   */
/*   Created: 2022/06/22 18:32:52 by rdoukali				  #+#		#+#						 */
/*   Updated: 2022/06/24 19:04:24 by rdoukali				 ###   ########.fr		   */
/*																																						*/
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct		s_list
{
	int			data;
	struct s_list	*next;
}				t_list;

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		count_all(int ac, char **av);
int		iss_digit(char *str);
int		*fill_in(int size, char **av);
void		ft_error(int c);
int		ft_atoi(char *str);
int		*tab_dup(int *tab , int size);
int		ft_atoi(char *str);
int		*fill_tab(char **av, int size);
void		swap(int *a, int *b);
void		sa(int *tab, int size);
void		sb(int *tab, int size);
void		ss(int *tab1, int *tab2, int size1, int size2);
void		pa(int *tab1, int *tab2, int *s1, int *s2);
void		pb(int *tab2, int *tab1, int *s2, int *s1);
void		ra(int *tab, int size);
void		rb(int *tab, int size);
void		rr(int *tab1, int *tab2, int s1, int s2);
void		rra(int *tab, int size);
void		rrb(int *tab, int size);
void		rrr(int *tab1, int *tab2, int s1, int s2);
int		count(char *str);
int		*fill_all(char *av, int *size);
int		a_order(int *a, int s);
int		*sort_tab(int *tab, int s1);
int		*sort_rev(int *a, int s1);
void		check_dup(int *tab, int size);
int		after_med(int *a,int s1, int sort);
void		order(int *a, int size);
int		*tab_join(int *tab1, int *tab2, int *s1, int *s2);
int		medi(int *a, int s);
void		all_500(int *a, int *b, int *s1, int *s2);
void		all_100(int *a, int *b, int *s1, int *s2);
void		all_20(int *a, int *b, int *s1, int *s2);
t_list	*sort_lst(int *sort, int s_s, int s_e);
int		check_sort_lst(int *a, int s1, t_list *sort, int s5);
void		push_final_lst(int *a, int *b, int *s1, int *s2, t_list *sort, int s5);
void		push_lst(int *a, int *b, int *s1, int *s2, t_list *sort, int s5);
void		push_back_lst(int *a, int *b, int *s1, int *s2, t_list *sort, int s5);
void		push_back_direct_lst(int *a, int *b, int *s1, int *s2, t_list *sort, int s5);
int		sort_after_lst(int *a, int s1, t_list *sort, int s3);
int		search_lst(int a, t_list *sort, int s5);
int		lst_index(t_list *lst, int n);
void		all_1000(int *a, int *b, int *s1, int *s2);

void		return_to_b(int *a, int *b, int *s1, int *s2, t_list *sort, int s5);
void		all_2000(int *a, int *b, int *s1, int *s2);
void		push_back_prt(int *a, int *b, int *s1, int *s2, t_list *sort, int s5);
void		push_prt_to_a(int *a, int *b, int *s1, int *s2, t_list *sort, int s5);
void		return_all(int *a, int *b, int *s1, int *s2);


#endif