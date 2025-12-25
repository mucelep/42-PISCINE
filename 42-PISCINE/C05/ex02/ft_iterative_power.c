/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:09:26 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 20:09:26 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak bir sayının kuvvetini çıktı veren iteratif bir fonksiyon oluşturunuz.
//0’dan küçük bir kuvvet 0 çıktısını verir. Overflow durumları işlenmemelidir.
//• 0’ın 0’ıncı kuvvetinin 1 çıktısını vereceğine karar verdik

int ft_iterative_power(int nb, int power)
{
	int	s;

	s = 1;
	if(power < 0)
		return(0);
	if(power == 0)
		return(1);
	while (power > 0)
	{
		s *= nb;
		power--;
	}
	return(s);
}

/*#include <stdio.h>

int main()
{
	int nb = 5;
	int pw = 3;
	printf("%d",ft_iterative_power(nb,pw));
}*/