/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:58:19 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/12 07:07:17 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
	int a, b, div, mod;
	a = 10;
	b = 2;
	ft_div_mod(a,b,&div,&mod);
	printf("%d\n%d",div,mod);
	return(0);
}