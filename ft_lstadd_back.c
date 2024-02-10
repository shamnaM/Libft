/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmuhamm <shmuhamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:03:23 by shmuhamm          #+#    #+#             */
/*   Updated: 2023/07/28 07:50:48 by shmuhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL && new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
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
// 	t_list *nod3;
// 	t_list *nod4;

// 	lst = (t_list **)malloc(sizeof(t_list *));
// 	nod1 = ft_lstnew("shamna");
// 	*lst = nod1;
// 	nod2 = ft_lstnew("muhammad");
// 	nod1->next = nod2;
// 	nod3 = ft_lstnew("Mrs.");
// 	nod2->next = nod3;
// 	print(*lst);
// 	nod4 = ft_lstnew("Moleri");
// 	ft_lstadd_back(lst, nod4);

// 	print(*lst);
// }