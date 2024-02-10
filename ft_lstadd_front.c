/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmuhamm <shmuhamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:52:26 by shmuhamm          #+#    #+#             */
/*   Updated: 2023/07/23 08:14:12 by shmuhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// static void	print(t_list *head)
// {
// 	while (head != NULL)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// 	printf("***********************\n");
// }
// int	main(void)
// {
// 	t_list **lst;
// 	t_list *nod1;
// 	t_list *nod2;
// 	t_list *node3;

// 	lst = (t_list **)malloc(sizeof(t_list *));
// 	nod1 = ft_lstnew("shamna");
// 	*lst = nod1;
// 	nod2 = ft_lstnew("muhammad");
// 	nod1->next = nod2;
// 	print(*lst);
// 	node3 = ft_lstnew("Mrs.");
// 	ft_lstadd_front(lst, node3);
// 	print(*lst);
// }