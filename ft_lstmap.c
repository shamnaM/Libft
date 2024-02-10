/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmuhamm <shmuhamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 06:50:33 by shmuhamm          #+#    #+#             */
/*   Updated: 2023/08/01 18:10:14 by shmuhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	int		count;

	count = 0;
	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

// static void	print(t_list *head);
// static void	del(void *content)
// {
// 	content = NULL;
// }

// void		*upper(void *s);
// void	*upper(void *s)
// {
// 	int		i;
// 	char	*c;

// 	i = 0;
// 	c = strdup(s);
// 	while (c[i])
// 	{
// 		if (c[i] >= 'a' && c[i] <= 'z')
// 			c[i] = c[i] - 32;
// 		i++;
// 	}
// 	return (c);
// }

// static void	print(t_list *head)
// {
// 	while (head != NULL)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// 	printf("***********************\n");
// }

// int	main(void)
// {
// 	t_list *nod1;
// 	t_list *nod2;
// 	t_list *nod3;
// 	t_list *lst;
// 	t_list *tmp;
// 	t_list *nod4;
// 	char name1[] = "shamna";
// 	char name2[] = "muhammad";
// 	char name3[] = "fahad";
// 	char name4[] = "Moleri";

// 	nod1 = ft_lstnew(name1);
// 	lst = nod1;
// 	nod2 = ft_lstnew(name2);
// 	nod1->next = nod2;
// 	nod3 = ft_lstnew(name3);
// 	nod2->next = nod3;
// 	nod4 = ft_lstnew(name4);
// 	nod3->next = nod4;
// 	print(ft_lstmap(lst, upper, del));
// 	print(lst);
// }