/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:58:06 by akuburas          #+#    #+#             */
/*   Updated: 2023/11/02 09:19:00 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <limits.h>

int main(void)
{
	char	*s = "-9223372036854775806";
	char	*s2 = "-1";
	char	*s3 = "-159989898989756756756765756";
	char	*s4 = "0";
	char	*s5 = "-2147483648";
	char	*s6 = "2147483647";
	char	*s7 = "5";
	char	*s8 = "50";
	char	*s9 = "98111111111111111111111111111";



	printf("atoi: %i\n", atoi(s));
	printf("ftatoi: %i\n", ft_atoi(s));
	printf("atoi: %i\n", atoi(s2));
	printf("ftatoi: %i\n", ft_atoi(s2));
	printf("atoi: %i\n", atoi(s3));
	printf("ftatoi: %i\n", ft_atoi(s3));
	printf("atoi: %i\n", atoi(s4));
	printf("ftatoi: %i\n", ft_atoi(s4));
	printf("atoi: %i\n", atoi(s5));
	printf("ftatoi: %i\n", ft_atoi(s5));
	printf("atoi: %i\n", atoi(s6));
	printf("ftatoi: %i\n", ft_atoi(s6));
	printf("atoi: %i\n", atoi(s7));
	printf("ftatoi: %i\n", ft_atoi(s7));
	printf("atoi: %i\n", atoi(s8));
	printf("ftatoi: %i\n", ft_atoi(s8));
	printf("atoi: %i\n", atoi(s9));
	printf("ftatoi: %i\n", ft_atoi(s9));
}


