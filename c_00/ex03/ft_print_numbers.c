/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:10:49 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/11 01:19:46 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
int tarzan = '0';
while(tarzan <= '9')
{
	write(1,&tarzan,1);
	tarzan++;
}
}
int main(){
	ft_print_numbers();
}
