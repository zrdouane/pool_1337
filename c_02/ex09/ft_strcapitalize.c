/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:22:29 by zrdouane          #+#    #+#             */
/*   Updated: 2021/10/02 15:10:22 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	uppercase(char	*c)
{	
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	lowercase(char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
			c[i] = c[i] + 32;
		c++;
	}
}

char	*ft_strcapitalize(char	*str)
{
	char	*ptr;
	int	
			i;

	i = 0;
	ptr = str;
	lowercase(str);
	if (ptr[i] >= 'a' && ptr[i] <= 'z')
		ptr[i] = ptr[i] - 32;
	while (ptr [i] != '\0')
	{
		if (
			!(
				(ptr[i] >= 'a' && ptr[i] <= 'z')
				|| (ptr[i] >= 'A' && ptr[i] <= 'Z')
				|| (ptr[i] >= '0' && ptr[i] <= '9')
			)
		)
			if (ptr[i + 1] != '\0')
				uppercase(ptr + 1);
		ptr++;
	}
	return (str);
}
