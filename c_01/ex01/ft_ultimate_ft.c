/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:43:07 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/12 05:43:56 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main()
{
	int a;
	int *nbr;
	int **nbr1;
	int ***nbr2;
	int ****nbr3;
	int *****nbr4;
	int ******nbr5;
	int *******nbr6;
	int ********nbr7;
	int *********nbr8;
	nbr=&a;
	nbr1=&nbr;
	nbr2=&nbr1;
	nbr3=&nbr2;
	nbr4=&nbr3;
	nbr5=&nbr4;
	nbr6=&nbr5;
	nbr7=&nbr6;
	nbr8=&nbr7;
	ft_ultimate_ft(nbr8);
	printf("%d",a);

}
