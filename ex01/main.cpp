/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntodisoa <ntodisoa@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 11:29:34 by ntodisoa          #+#    #+#             */
/*   Updated: 2024/12/29 11:29:59 by ntodisoa         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <stdlib.h>

std::string read_data(const std::string &name)
{
	std::string data 				= "";
	bool		is_not_first_loop	= false;
	do
	{
		if (is_not_first_loop)
			std::cout << name << " cannot be empty!" << std::endl;

		std::cout << name << "> " << std::flush;
		std::getline (std::cin, data);
		if (std::cin.eof())
			exit (0);
		is_not_first_loop = true;
	} while (data.empty());
	return (data);
}


int main(void)
{
	PhoneBook   ph;
	std::string cmd 			= "", 
				first_name 		= "",
				last_name 		= "",
				nickname 		= "",
				phone_number 	= "",
				darkest_secret	= "",
				tmp 			= "";
	int			index 			= -1,
				max_index 		= 0;
	bool		is_index_valid	= true;

	do
	{
		cmd = read_data("COMMAND");
		if (cmd == "ADD")
		{
			first_name 			= read_data("ADD    > First name");    
			last_name 			= read_data("ADD    > Last name");    
			nickname 			= read_data("ADD    > Nickname");    
			phone_number 		= read_data("ADD    > Phone number");    
			darkest_secret		= read_data("ADD    > Darkest Secret");
			ph.add(first_name, last_name, nickname,phone_number, darkest_secret);
		}
		else if (cmd == "SEARCH")
		{
			index = -1;
			max_index = ph.get_max_index();
			for(int i = 0; i < max_index; i++)
			{
				ph.show_basic(i);
				std::cout << std::endl;
			}
			std::cout << "SEARCH > Index > " << std::flush;

			std::getline (std::cin, tmp);
			for (size_t i = 0; i < tmp.length(); i++)
			{
				if (!isdigit(tmp[i]))
				{
					is_index_valid = false;
					break;
				}
			}
			index = atoi(tmp.c_str());
			if (!is_index_valid || index < 0 || index > ph.get_max_index() - 1 || tmp.empty())
				continue;

			ph.Search(index);
		}

	}while (cmd != "EXIT");

	return (0);
}