/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 23:55:11 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 23:55:11 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak verilen sayı asal sayı ise 1, asal sayı değil ise 0 sonucunu veren bir
//fonksiyon oluşturunuz.

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if(nb <= 1)
		return(0);
	while (n < nb)
	{
		if(nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}