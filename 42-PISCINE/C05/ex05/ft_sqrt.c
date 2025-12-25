/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 23:48:10 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 23:48:10 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Bir sayının karekökünü çıktı olarak veren bir fonksiyon oluşturunuz (eğer karekökü
//varsa), sayının karekökü irrasyonelse fonksiyon 0 sonucunu versin.

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if(nb < 0)
		return(0);
	while (n * n <= nb)
	{
		if (n * n == nb)
			return(n);
		n++;
	}
	return (0);
}