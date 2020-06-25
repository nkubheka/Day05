/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:53:36 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/25 12:58:59 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
char		*ft_strlowcase(char *str);
int main()
{
	int j = 0;
	char str[] = "WE THINK CODE\n";

	char ch;
	while(str[j]) {
		ch  = str[j];

		putchar(tolower(ch));
		j++
	}
	return 0;
}

