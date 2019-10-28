/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:49:29 by lryst             #+#    #+#             */
/*   Updated: 2019/10/28 18:10:45 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new);
{
    t_list *tmp;
    tmp = *alst;
    new = (t_list)malloc(sizeof(t_list));
    if (new ==NULL)
        return (NULL);
    new->next = NULL;
    if (*alst == NULL)
        return (new);
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
}