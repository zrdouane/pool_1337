/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:52:44 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/12 07:24:40 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	div = *a / *b;
	*b = *a % *b;
	*a = div;

}
int main()
{
	int a,b;
	int *div;
	int *mod;
	div = &a;
	mod = &b; 
	a = 10;
	b = 3;
	ft_ultimate_div_mod(div,mod);
	printf("%d\n%d",a,b);
	return(0);
}