/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:02:59 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 20:02:59 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak verilen sayının faktöryelini çıktı veren recursive bir fonksiyon yazınız.
//• Eğer argüman geçersizse fonksiyon 0 sonucunu vermelidir.
//• Overflow durumları işlenmemelidir , fonksiyon çıktısı tanımsız olacaktır.


int	ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return (0);
	if(nb == 1 || nb == 0)
		return (1);
	return(nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>

int main()
{
	int	nb = 5;
	printf("%d",ft_recursive_factorial(nb));
}*/