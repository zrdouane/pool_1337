/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:33:07 by zrdouane          #+#    #+#             */
/*   Updated: 2021/11/07 23:35:25 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc((sizeof(int) * len));
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
int main()
{
	int *arr;
	int n = ft_ultimate_range(&arr, -2, 11);
	int i=0;
	while(i < n)
		printf("%d ", arr[i++]);
}