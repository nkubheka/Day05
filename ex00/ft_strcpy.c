/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:45:08 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/25 12:51:58 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char		*ft_strcpy(char *dest, char *src);
{
	int i;
	i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	return dest;
}
int main()
{
	char src[100], dest[100], i;
	printf("Enter sring src: ");
	scanf("%s", src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	printf("String dest: %s", dest)
		return 0;
}

