/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:50:38 by zael-mou          #+#    #+#             */
/*   Updated: 2024/06/29 10:02:00 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	r;
	int	i;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			r = 0;
		}
		i++;
	}
	return (r);
}
