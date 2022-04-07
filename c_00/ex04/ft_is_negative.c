/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:16:28 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/12 16:13:05 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
char tarzan;
if (n >= 0)
{
    tarzan = 'P';
    write(1,&tarzan,1);
}
else
{
    tarzan = 'N';
    write(1,&tarzan,1);
}
}
int main()
{
	ft_is_negative(0);
}
