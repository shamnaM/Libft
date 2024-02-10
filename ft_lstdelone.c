/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmuhamm <shmuhamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:02:28 by shmuhamm          #+#    #+#             */
/*   Updated: 2023/07/25 19:58:02 by shmuhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// static void	del(void *content)
// {
// 	content = NULL;
// }

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
// 	t_list *nod1;
// 	t_list *nod2;
// 	t_list *nod3;
// 	t_list **lst;
// 	t_list *tmp;
// 	t_list *nod4;

// 	lst = (t_list **)malloc(sizeof(t_list *));
// 	nod1 = ft_lstnew("shamna");
// 	*lst = nod1;
// 	nod2 = ft_lstnew("muhammad");
// 	nod1->next = nod2;
// 	nod3 = ft_lstnew("fahad");
// 	nod2->next = nod3;
// 	nod4 = ft_lstnew("Abootty");
// 	nod3->next = nod4;
// 	print(*lst);
// 	tmp = nod2->next;
// 	ft_lstdelone(nod2, del);
// 	nod1->next = tmp;
// 	print(*lst);
// }