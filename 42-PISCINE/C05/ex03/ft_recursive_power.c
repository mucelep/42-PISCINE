/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:18:44 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 20:18:44 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak bir sayının kuvvetini çıktı veren recursive bir fonksiyon oluşturunuz.
//• Overflow durumları işlenmemelidir, çıktı tanımsız olur.
//• 0’ın 0’ıncı kuvvetinin 1 çıktısını vereceğine karar verdik

int ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}

/*#include <stdio.h>

int main()
{
	int nb = 5;
	int pw = 3;
	printf("%d",ft_recursive_power(nb,pw));
}*/