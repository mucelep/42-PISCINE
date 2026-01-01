/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:07:31 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/31 18:07:31 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Reproduce the behavior of the function strdup (man strdup).

#include <stdlib.h>

char *ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*copy;

	len = 0;
	while(src[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if(!copy)
		return(NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return(copy);
}

/*#include <stdio.h>

int main ()
{
	char *a;
	a = ft_strdup("merhaba");
	printf("%s\n",a);
	free(a);
	return (0);
}*/