/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 06:16:01 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 06:16:01 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 'z' harfinden başlayarak, azalan şekilde (z'den a'ya doğru), tek satırda, hepsi küçük
// harf olacak şekilde alfabeyi ekrana yazdıran bir fonksiyon yazınız.

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}

/*int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/