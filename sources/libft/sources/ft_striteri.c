/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 11:06:03 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:46:30 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != 0)
		{
			f((unsigned int)i, &s[i]);
			i++;
		}
	}
}
