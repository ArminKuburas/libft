/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:19:01 by akuburas          #+#    #+#             */
/*   Updated: 2023/10/25 12:38:20 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr; 

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*(ptr) = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}
