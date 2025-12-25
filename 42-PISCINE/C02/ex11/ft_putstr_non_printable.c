/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 23:02:33 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 23:02:33 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Karakter dizisini ekranda gösteren bir fonksiyon oluşturunuz. Eğer bu dizi yazdırılamaz
karakter barındırıyorsa, bu karakterler, öncesinde "Ters eğik çizgi" gelecek
biçimde onaltılıklar şeklinde gösterilmelidir(küçük harf).
Coucou\ntu vas bien ?
• Fonksiyon şunu göstermelidir :
Coucou\0atu vas bien ?*/

#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex[c / 16], 1);
			write(1, &hex[c % 16], 1);
		}
		i++;
	}
}