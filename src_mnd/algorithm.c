/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:20:38 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/24 18:31:59 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    all_500(int *a, int *b, int *s1, int *s2)
{
    int i = 0;
    int s_0 = *s1 * 1;
    int s_1 = *s1 / 10;
    int s_2 = s_1 + s_1;
    int s_3 = s_2 + s_1;
    int s_4 = s_2 + s_2;
    int s_5 = s_4 + s_1;
    int s_6 = s_5 + s_1;
    int s_7 = s_6 + s_1;
    int s_8 = s_7 + s_1;
    int s_9 = s_8 + s_1;
    int s_11 = *s1 - 3;
    int s_12 = *s1 - s_9;
    int s_10 = *s1 - s_9 - 3;
    
    int *sort_all = sort_tab(a,*s1);
    int *sort_inv = sort_rev(a,*s1);
    //t_list *sort1 = sort_lst(sort_all, 0, s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, 0, s_1), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1, s_2), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_2, s_3), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_3, s_4), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_4, s_5), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_5, s_6), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_6, s_7), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_7, s_8), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_8, s_9), s_1);
    push_final_lst(a, b, s1, s2, sort_lst(sort_all, s_9, s_11), s_10);
    order(a, *s1);
    push_back_direct_lst(a, b, s1, s2, sort_lst(sort_inv, 3, s_12), s_12);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1, s_2), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_2, s_3), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_3, s_4), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_4, s_5), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_5, s_6), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_6, s_7), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_7, s_8), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_8, s_9), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_9, s_0), s_1);
    
    free(sort_all);
    free(sort_inv);
    //free(sort1);
}

void    all_100(int *a, int *b, int *s1, int *s2)
{
    int i = 0; int j = 0;
    int s_0 = *s1 * 1;
    int s_1 = *s1 / 5;
    int s_2 = s_1 + s_1;
    int s_3 = s_2 + s_1;
    int s_4 = s_2 + s_2;
    int s_11 = *s1 - 3;
    int s_12 = *s1 - s_4;
    int s_10 = *s1 - s_4 - 3;
    int s_1_3= s_1 - 3;
    
    int *sort_all = sort_tab(a,*s1);
    int *sort_inv = sort_rev(a,*s1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, 0, s_1), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1, s_2), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_2, s_3), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_3, s_4), s_1);
    push_final_lst(a, b, s1, s2, sort_lst(sort_all, s_4, s_11), s_10);
    order(a, *s1);
    push_back_direct_lst(a, b, s1, s2, sort_lst(sort_inv, 3, s_1), s_1_3);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1, s_2), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_2, s_3), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_3, s_4), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_4, s_0), s_12);
    free(sort_all);
    free(sort_inv);
}

void    all_20(int *a, int *b, int *s1, int *s2)
{
    int i = 0; int j = 0;
    int s_0 = *s1 * 1;
    int s_1 = *s1 - 3;
    int s_10 = *s1 - s_1 - 3;
    int *sort_all = sort_tab(a,*s1);
    int *sort_inv = sort_rev(a,*s1);

    push_final_lst(a, b, s1, s2, sort_lst(sort_all, 0, s_1), s_1);
    order(a, *s1);
    push_back_direct_lst(a, b, s1, s2, sort_lst(sort_inv, 3, s_0), s_1);
    free(sort_all);
    free(sort_inv);
}

void    order(int *a, int size)
{
    if(a_order(a,size) == 0 && size == 3)
    {
        if(a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
            rra(a, size);
        else if(a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
            sa(a, size);
        else if(a[0] > a[1] && a[0] > a[2] && a[1] < a[2])
            ra(a, size);
        else if(a[0] > a[1] && a[0] > a[2] && a[1] > a[2])
            {
                ra(a, size);
                sa(a, size);
            }
        else if(a[0] < a[1] && a[0] < a[size - 1] && a[1] > a[size - 1])
        {
            rra(a, size);
            sa(a, size);
        }
    }
    else if(a_order(a,size) == 0 && size == 2)
        {
            if(a[0] > a[1])
                sa(a, size);
        }
}

void    all_1000(int *a, int *b, int *s1, int *s2)
{
    int i = 0;
    int s_0 = *s1 * 1;
    int s_1 = *s1 / 20;
    int s_2 = s_1 + s_1;
    int s_3 = s_2 + s_1;
    int s_4 = s_2 + s_2;
    int s_5 = s_4 + s_1;
    int s_6 = s_5 + s_1;
    int s_7 = s_6 + s_1;
    int s_8 = s_7 + s_1;
    int s_9 = s_8 + s_1;
    int s_1_0 = s_9 + s_1;
    int s_1_1 = s_1_0 + s_1;
    int s_1_2 = s_1_1 + s_1;
    int s_1_3 = s_1_2 + s_1;
    int s_1_4 = s_1_3 + s_1;
    int s_1_5 = s_1_4 + s_1;
    int s_1_6 = s_1_5 + s_1;
    int s_1_7 = s_1_6 + s_1;
    int s_1_8 = s_1_7 + s_1;
    int s_1_9 = s_1_8 + s_1;

    int s_11 = *s1 - 3;
    int s_12 = *s1 - s_1_9;
    int s_10 = *s1 - s_1_9 - 3;
    int s_2_0= s_11 - s_1_8;
    
    int *sort_all = sort_tab(a,*s1);
    int *sort_inv = sort_rev(a,*s1);
    
    // int *sort_test = sort_lst(sort_inv, s_1_6, s_0);
    
    t_list *sort1 = sort_lst(sort_all, 0, s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, 0, s_4), s_4);
    return_to_b(a, b, s1, s2, sort_lst(sort_all, 0, s_4), s_4);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, 0, s_1), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1, s_2), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_2, s_3), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_3, s_4), s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_4, s_8), s_4);
    return_to_b(a, b, s1, s2, sort_lst(sort_all, s_4, s_8), s_4);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_4, s_5), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_5, s_6), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_6, s_7), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_7, s_8), s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_8, s_1_2), s_4);
    return_to_b(a, b, s1, s2, sort_lst(sort_all, s_8, s_1_2), s_4);

    push_lst(a, b, s1, s2, sort_lst(sort_all, s_8, s_9), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_9, s_1_0), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_0, s_1_1), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_1, s_1_2), s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_2, s_1_6), s_4);
    return_to_b(a, b, s1, s2, sort_lst(sort_all, s_1_2, s_1_6), s_4);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_2, s_1_3), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_3, s_1_4), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_4, s_1_5), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_5, s_1_6), s_1);
    

    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_6, s_1_7), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_7, s_1_8), s_1);
    //push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_8, s_1_9), &s_1);
    //push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_9, s_1_8), &s_1);

    push_final_lst(a, b, s1, s2, sort_lst(sort_all, s_1_8, s_11), s_2_0);
    
    order(a, *s1);
    push_back_direct_lst(a, b, s1, s2, sort_lst(sort_inv, 3, s_12), s_10);
    push_back_direct_lst(a, b, s1, s2, sort_lst(sort_inv, s_1, s_2), s_2);
    //push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1, s_2), &s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_2, s_3), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_3, s_4), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_4, s_5), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_5, s_6), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_6, s_7), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_7, s_8), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_8, s_9), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_9, s_0), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_9, s_1_0), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_0, s_1_1), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_1, s_1_2), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_2, s_1_3), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_3, s_1_4), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_4, s_1_5), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_5, s_1_6), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_6, s_1_7), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_7, s_1_8), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_8, s_1_9), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1_9, s_0), s_12);

    free(sort_all);
    free(sort_inv);
    free(sort1);
}

void    all_2000(int *a, int *b, int *s1, int *s2)
{
    int i = 0;
    int s_0 = *s1 * 1;
    int s_1 = *s1 / 20;
    int s_2 = s_1 + s_1;
    int s_3 = s_2 + s_1;
    int s_4 = s_2 + s_2;
    int s_5 = s_4 + s_1;
    int s_6 = s_5 + s_1;
    int s_7 = s_6 + s_1;
    int s_8 = s_7 + s_1;
    int s_9 = s_8 + s_1;
    int s_1_0 = s_9 + s_1;
    int s_1_1 = s_1_0 + s_1;
    int s_1_2 = s_1_1 + s_1;
    int s_1_3 = s_1_2 + s_1;
    int s_1_4 = s_1_3 + s_1;
    int s_1_5 = s_1_4 + s_1;
    int s_1_6 = s_1_5 + s_1;
    int s_1_7 = s_1_6 + s_1;
    int s_1_8 = s_1_7 + s_1;
    int s_1_9 = s_1_8 + s_1;

    int s_11 = *s1 - 3;
    int s_12 = *s1 - s_1_9;
    int s_10 = *s1 - s_1_9 - 3;
    int s_2_0= s_11 - s_1_8;
    
    int *sort_all = sort_tab(a,*s1);
    int *sort_inv = sort_rev(a,*s1);
    
    t_list *sort1 = sort_lst(sort_all, 0, s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, 0, s_4), s_4);
    
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_3, s_4), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_2, s_3), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_1, s_2), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, 0, s_1), s_1);
    
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, 0, s_1), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_1, s_2), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_2, s_3), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_3, s_4), s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_4, s_8), s_4);
    
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_7, s_8), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_6, s_7), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_5, s_6), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_4, s_5), s_1);
    
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_4, s_5), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_5, s_6), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_6, s_7), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_7, s_8), s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_8, s_1_2), s_4);
    
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_1_1, s_1_2), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_1_0, s_1_1), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_9, s_1_0), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_8, s_9), s_1);
    
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_8, s_9), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_9, s_1_0), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_1_0, s_1_1), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_1_1, s_1_2), s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_2, s_1_6), s_4);
    
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_1_5, s_1_6), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_1_4, s_1_5), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_1_3, s_1_4), s_1);
    push_prt_to_a(a, b, s1, s2, sort_lst(sort_all, s_1_2, s_1_3), s_1);
    
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_1_2, s_1_3), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_1_3, s_1_4), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_1_4, s_1_5), s_1);
    push_back_prt(a, b, s1, s2, sort_lst(sort_all, s_1_5, s_1_6), s_1);
    
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_6, s_1_7), s_1);
    push_lst(a, b, s1, s2, sort_lst(sort_all, s_1_7, s_1_8), s_1);
    
    push_final_lst(a, b, s1, s2, sort_lst(sort_all, s_1_8, s_11), s_2_0);
    
    order(a, *s1);
    
    push_back_direct_lst(a, b, s1, s2, sort_lst(sort_inv, 3, s_12), s_12);
    push_back_direct_lst(a, b, s1, s2, sort_lst(sort_inv, s_1, s_2), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_1, s_2), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_2, s_3), s_1);
    push_back_lst(a, b, s1, s2, sort_lst(sort_inv, s_3, s_4), s_1);
    
    return_all(a, b, s1, s2);

    free(sort_all);
    free(sort_inv);
    free(sort1);
}