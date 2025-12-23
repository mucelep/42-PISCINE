/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:53:56 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 17:53:56 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Artan sıraya göre listelenen üç farklı basamağın tüm farklı kombinasyonlarını, artan
düzende ekrana yazdıran bir fonksiyon yazınız. - evet, sayıların tekrar etmesi isteğe
bağlıdır.
• İstenilen çıktı aşağıdaki gibidir :
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
• 987 yok çünkü 789 hali hazırda bulunmakta.
• 999 yok çünkü 9 rakamı birden fazla kere bulunmakta.*/

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if(a != '7')
					write(1, ", ", 2);
				c++;
			}	
			b++;
		}	
		a++;
	}
}

/*int main (){
	ft_print_comb();
	return 0;
}*/