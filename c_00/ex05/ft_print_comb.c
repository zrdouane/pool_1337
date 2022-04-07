/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:27:58 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/11 09:52:25 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	    write(1, &c, 1);
}

void	ft_print(int z, int a, int c)
{
	ft_putchar(z);
	ft_putchar(a);
	ft_putchar(c);
	if (z != '7')
		write(1,", ",2);
}

void	ft_print_comb(void)
{
	int	z;
	int	a;
	int	c;

	z = '0';
	a = '1';
	c = '2';
	while (z <= ('7'))
	{
		while (a <= ('8'))
		{
			while (c <= ('9'))
			{	
				ft_print(z, a, c);
				c++;
			}	
			c = ++a + 1;
		}
		a = ++z;
	}
	ft_putchar('\n');
}
int main(){
	ft_print_comb();
}