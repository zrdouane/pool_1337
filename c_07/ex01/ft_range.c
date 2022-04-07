/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:32:59 by zrdouane          #+#    #+#             */
/*   Updated: 2021/10/14 10:33:01 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	range = (int *)malloc((sizeof(int) * len));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*int main()
{
	int *arr =  ft_range(-2, 11);
	int i=0;
	while(i < 13)
		printf("%d ", arr[i++]);
}*/
