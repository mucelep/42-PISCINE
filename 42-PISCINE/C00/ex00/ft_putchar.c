/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 01:55:46 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 01:55:46 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Paramtre olarak verilen karakteri, ekrana yazdıran bir fonksiyon yazınız.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int main (void)
{
	ft_putchar('c');
	return (0);
}*/