/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfitte <bfitte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:49:24 by bfitte            #+#    #+#             */
/*   Updated: 2025/11/13 18:32:18 by bfitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// int	main(void)
// {
// 	t_list * l =  NULL;
// 	t_list * l2 =  NULL;
// 	t_list * new_node1;
// 	t_list * new_node2;
// 	t_list * new_node3;
// 	t_list * new_node4;

// 	new_node1 = ft_lstnew((void*)1);
// 	new_node2 = ft_lstnew((void*)2);
// 	new_node3 = ft_lstnew((void*)3);
// 	new_node4 = ft_lstnew((void*)4);
// 	printf("Pointeur 1 %p\n", new_node1);
// 	printf("Pointeur 2 %p\n", new_node2);
// 	printf("Pointeur 3 %p\n", new_node3);
// 	printf("Pointeur 4 %p\n", new_node4);
// 	ft_lstadd_back(&l, new_node1);
// 	printf("pointeur de l %p\n", l);
// 	if (!l->next)
// 		printf("next de l null\n");
// 	printf("contenu de l, normalement 1 %d\n", (int)(long)l->content);
// 	ft_lstadd_back(&l, new_node2);
// 	printf("pointeur de lnext (normalement p2) %p\n", l->next);
// 	ft_lstadd_back(&l2, new_node3);
// 	printf("pointeur de l2 normalement p3 %p\n", l2);
// 	printf("contenu de l2, normalement 3 %d\n", (int)(long)l2->content);
// 	ft_lstadd_back(&l2, new_node4);
// 	printf("pointeur de l2next normalement p4 %p\n", l2->next);
// 	printf("contenu de l2->next, normalement 4 %d\n", 
// (int)(long)l2->next->content);
// 	ft_lstadd_back(&l, l2);
// 	printf("pointeur de lnextnext normalement p3 %p\n", l->next->next);
// 	printf("contenu de l->nextnext, normalement 3 %d\n", (int)
// (long)l->next->next->content);
// 	printf("pointeur de lnextnextnext normalement p4 %p\n", 
// l->next->next->next);
// 	printf("contenu de l->nextnextnext, normalement 4 %d\n", 
// (int)(long)l->next->next->next->content);
// 	printf("pointeur de l2 %p\n", l2);
// 	printf("contenu de l2 %p\n", l2->content);
// 	printf("Quelque chose%s", (char *)(t_list *)(l->next)->next->
// next->content);
// 	return (0);
// }

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*last_new;

	last = ft_lstlast(*lst);
	last_new = ft_lstlast(new);
	if (last != NULL)
		last->next = new;
	else
		*lst = new;
	last_new->next = NULL;
}
