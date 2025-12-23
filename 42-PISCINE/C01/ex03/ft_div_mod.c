/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:14:04 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 22:14:04 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Bu fonksiyon a parametresini b parametresine böler ve bölümün sonucu div ile
//belirtilen tam sayıda saklar. Aynı zamanda a ’nın b ’ye bölümünün kalanını mod ile
//belirtilen tam sayıda saklar.

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include<stdio.h>

int main ()
{
	int a,b;
	a = 10;
	b = 3;
	int bölüm,kalan;
	ft_div_mod(a,b,&bölüm,&kalan);
	printf("bolum = %d \n kalan = %d",bölüm,kalan);
	return 0;
}*/