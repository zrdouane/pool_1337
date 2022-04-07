/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:20:21 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/12 08:38:21 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	    return (i);
}
int main()
{
	char str[] = "tarzan";
	int res = ft_strlen(str);
	printf("%d",res);
return(0);
}