/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:42:47 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/13 21:53:06 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_alphabet(void)
{
	char tarzan;
	tarzan = 'a';
	while (tarzan <= 'z')
	{
		write(1,&tarzan,1);
		tarzan++;
	}
	
}
int main()
{
	ft_print_alphabet();
}