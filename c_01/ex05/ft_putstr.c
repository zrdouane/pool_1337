/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:08:37 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/12 17:30:21 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
	write(1,&str[i],1);
	i++;
	}
	
}
int main()
{
	ft_putstr("tarzan");
}