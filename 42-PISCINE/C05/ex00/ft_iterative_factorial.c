/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:18:17 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 19:18:17 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak verilen sayının faktöryelini çıktı veren iteratif bir fonksiyon yazınız.
//• Eğer argüman geçersizse fonksiyon 0 sonucunu vermelidir.
//• Overflow durumları işlenmemelidir , fonksiyon çıktısı tanımsız olacaktır.

int ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if(nb < 0)
		return(0);
	else if(nb == 1 || nb == 0)
		return(1);
	while(nb > 1)
		n *= nb--;
	return(n);
}

/*#include <stdio.h>

int main()
{
	int	nb = 5;
	printf("%d",ft_iterative_factorial(nb));
}*/