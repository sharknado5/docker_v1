/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaske <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:20:50 by tmaske            #+#    #+#             */
/*   Updated: 2017/06/07 16:20:52 by tmaske           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_arrlen(char **arr)
{
	int i;

	i = 0;
	if (arr != NULL && arr[i] != NULL)
	{
		while (arr[i])
			++i;
	}
	return (i);
}