/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 04:20:55 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 04:20:55 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************'************* */

//strcpy fonksiyonun davranışını yeniden üret (man strcpy).

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}