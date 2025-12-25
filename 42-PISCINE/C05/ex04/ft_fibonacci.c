/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:22:10 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 20:22:10 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*İlk ögesi 0 indeksinde olmak üzere Fibonacci serisinin n-inci ögesini çıktı veren bir
ft_fibonacci fonksiyonu oluşturunuz. Fibonacci serisinin şu şekilde başladığını
göz önünde bulunduracağız: 0, 1, 1, 2.
• Overflow durumları işlenmemelidir, çıktı tanımsız olur.
• Tabii ki de, ft_fibonacci recursive olmalıdır.
• Eğer index 0’dan küçükse, fonksiyon -1 sonucunu vermelidir*/

int	ft_fibonacci(int index)
{
	if(index < 0)
		return (0);
	if(index == 0)
		return (0);
	if(index == 1)
		return (1);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>

int main ()
{
	printf("%d",ft_fibonacci(6));
}*/