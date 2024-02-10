/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmuhamm <shmuhamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:22:01 by shmuhamm          #+#    #+#             */
/*   Updated: 2023/07/31 20:21:29 by shmuhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (size != 0 && count > (SIZE_T_MAX / size))
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	str = (void *)str;
	ft_bzero(str, (count * size));
	return (str);
}

// int	main(void)
// {
// 	size_t count = 5;
// 	size_t size = 5;
// 	int i, j;
// 	i = 0;
// 	j = 0;
// 	int *numbers = (int *)ft_calloc(count, size);
// 	int *num = (int *)calloc(count, size);
// 	while (i < 5)
// 	{
// 		printf("number[%d]=%d\n", i, numbers[i]);
// 		printf("num[%d]=%d\n", i, num[i]);
// 		i++;
// 	}
// 	free(numbers);
// 	free(num);
// }