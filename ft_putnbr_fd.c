/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 09:26:44 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/25 09:36:23 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (!n)
		ft_putchar_fd(n + 48, fd);
	else if (n < 0)
	{
		ft_putchar_fd(45, fd);
		if (n / 10)
			ft_putnbr_fd((n / 10) * -1, fd);
		ft_putchar_fd((n % 10) * -1 + 48, fd);
	}
	else
	{
		if (n / 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
