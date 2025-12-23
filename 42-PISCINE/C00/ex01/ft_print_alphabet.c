/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 02:13:53 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 02:13:53 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 'a' harfinden başlayarak, artan şekilde (a'dan z'ye doğru), tek satırda, hepsi küçük
// harf olacak şekilde alfabeyi ekrana yazdıran bir fonksiyon yazınız.

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}

/*int main(void)
{
	ft_print_alphabet();
	return (0);
}*/