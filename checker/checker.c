/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:55:34 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/23 21:05:06 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "checker.h"

void    all_move(int *a, int *b, int *s1, int *s2)
{
    int i;
    char *output;
    
    i = 0;
    output = get_next_line(0);
    while(output)
    {
        if(str_cmp("\n", output) == 0)
            break;
        if (str_cmp("sa\n", output) == 0)
            sa(a, s1);
        else if (str_cmp("sb\n", output) == 0)
            sb(b, s2);
        else if (str_cmp("ss\n", output) == 0)
            ss(a, b, s1, s2);
        else if (str_cmp("pa\n", output) == 0)
            pa(a, b, s1, s2);
        else if (str_cmp("pb\n", output) == 0)
            pb(a, b, s1, s2);
        else if (str_cmp("ra\n", output) == 0)
            ra(a, s1);
        else if (str_cmp("rb\n", output) == 0)
            rb(b, s2);
        else if (str_cmp("rr\n", output) == 0)
            rr(a, b, s1, s2);
        else if (str_cmp("rra\n", output) == 0)
            rra(a, s1);
        else if (str_cmp("rrb\n", output) == 0)
            rrb(b, s2);
        else if (str_cmp("rrr\n", output) == 0)
            rrr(a, b, s1, s2);
        else
            {
                write(1, "??\n", 3);
                ft_error(s1);
            }
        i++;
        output = get_next_line(0);
    }
}

void    sort_check(int *a, int *b, int *s1, int *s2)
{
    int i = 0;
    if (*s2 > 0)
            ft_ko(s1);
            
    // while(i < *s1)
    // {
    //     printf("[%d] ", a[i]);
    //     i++;
    // }
    //  i = 0;
    // printf("\n---------------------------------------------------------------------\n");
    // while(i < *s2)
    // {
    //     printf("[%d] ", b[i]);
    //     i++;
    // }
    
    if (a_order(a,s1) == 1)
        write(1, "OK\n", 3);
    else
            ft_ko(s1);
}



int main(int ac, char **av)
{
    int i;
    int *a;
    int *b;
    int s1;
    int s2;
    int s3;

    i = 0;
    s2 = 0;
    s1 = count_all(ac, av);
    if(ac < 2)
        return 0;
    a = fill_in(ac - 1, av);
    check_dup(a, &s1);
    b = malloc(sizeof(int) * 0);
    all_move(a, b, &s1, &s2);
    sort_check(a, b, &s1, &s2);
    
    free(a);
    free(b);
    return 0;
}