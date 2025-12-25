/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 02:32:42 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 02:32:42 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strncat fonksiyonun davranışını yeniden üret (man strcat)

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main ()
{
	char dst[20] = "merhaba";
	char src[] = " dunya";
	printf("%s",ft_strncat(dst,src,3));

}