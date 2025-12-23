/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:54:04 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 17:54:04 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parametre olarak verilen tam sayının işaretine bağlı olarak 'N' yada 'P' yazdıran bir fonksiyon yazınız.
// Eger sayı negatif ise 'N' pozitif veya sıfır ise 'P' göstermeli.

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*int main()
{
	ft_is_negative(5);
	return 0;
}*/