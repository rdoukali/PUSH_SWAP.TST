/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:32:16 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/24 15:42:50 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list      *sort_lst(int *sort, int s_s, int s_e)
{
    if (s_e <= s_s)
        return NULL;

    int i;
    t_list *lst;
    t_list *head = NULL;
    t_list *tmp;

    i = s_s;
    while(i < s_e)
    {
        lst = malloc(sizeof(t_list));
        lst->data = sort[i];
        lst->next=NULL;

        if(head == NULL)
            head = lst;
        else
        {
            tmp = head;
            while(tmp->next != NULL)
                tmp = tmp->next;
            tmp->next=lst;
            //free(lst);
        }
        i++;
    }
    //free(lst);
    //free(tmp);
    return head;
}

t_list	*s_a(int a)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	ptr->data = a;
	ptr->next = NULL;
	return (ptr);
}

t_list	*s_b(int b)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	ptr->data = b;
	ptr->next = NULL;
	return (ptr);
}