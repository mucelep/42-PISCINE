/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:45:04 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 18:45:04 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*str tarafından belirtilen dizinin ilk kısmını tam sayı gösterimine çeviren bir fonksiyon
oluşturunuz.
• Dizi herhangi bir miktar boş alan ile başlayabilir (isspace(3) tarafından belirlendiği
şekilde)
•••••• Dizinin ardından herhangi bir miktarda + ve - işareti gelebilir, - işareti verilen tam sayının
işaretini - işaretinin saygısının tek mi çift mi oluşuna bağlı olarak değiştirir.
• En son olarak, dizinin ardından 10 tabanından herhangi bir sayı gelebilir.
• Fonksiyonunuz diziyi, dizi kurallara uymayı bırakana kadar okumalı ve o noktaya kadar
okuduğunu kadarını geri döndürmelidir.
• Overflow ya da underflow ile ilgilenmemelisiniz. Bu durumda sonuç tanımsız çıkabilir .
• Aşağıda atoi geri döndürme değerini yazan bir programın örneği vardır:
$>./a.out " ---+--+1234ab567"
-1234*/

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return(r * s);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_atoi(" ---+--+1234ab567"));
    printf("%d\n", ft_atoi("  +++42"));          
    printf("%d\n", ft_atoi("  -+-+-10"));        
    return (0);
}