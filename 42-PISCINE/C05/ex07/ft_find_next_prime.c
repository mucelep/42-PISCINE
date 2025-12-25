/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 00:01:12 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/26 00:01:12 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Değişken olarak verilen sayıdan büyük ya da eşit en küçük asal sayıyı çıktı veren
//bir fonksiyon oluşturunuz.

int ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if(nb <= 2)
		return(2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return(nb);
}

#include <stdio.h>

int main ()
{
	printf("%d",ft_find_next_prime(24));
}
