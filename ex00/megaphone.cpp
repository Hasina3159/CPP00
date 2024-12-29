/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntodisoa <ntodisoa@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 11:29:17 by ntodisoa          #+#    #+#             */
/*   Updated: 2024/12/29 11:30:03 by ntodisoa         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>

int ft_is_lower(char c)
{
	if ((c <= 'z' && c >= 'a'))
		return (1);
	return (0);
}

void    ft_megaphone(char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		if (ft_is_lower(s[i]))
			std::cout << static_cast<char>(s[i] - 32) << std::flush;
		else
			std::cout << s[i] << std::flush;
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	
	i = 1;
	while (i < argc)
	{
		ft_megaphone(argv[i]);
		i++;
	}

	std::cout << std::endl;
	return (0);
}