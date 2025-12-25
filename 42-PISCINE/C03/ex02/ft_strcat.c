/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 02:23:53 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 02:23:53 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strcat fonksiyonun davranışını yeniden üret (man strcat)

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main ()
{
	char dst[20] = "merhaba";
	char src[] = " dunya";
	printf("%s",ft_strcat(dst,src));

}