/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 02:37:55 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 02:37:55 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strstr fonksiyonun davranışını yeniden üret (man strstr).

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return(str);	
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return(str + i);
			j++;
		}
		i++;
	}
	return (0);
}
