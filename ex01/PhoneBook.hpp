#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	int m_index;
	Contact m_contacts[8];

  public:
	PhoneBook();
	//~PhoneBook();
	void add(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number,
		std::string darkest_secret);
	void Search(int index);

  private:
	void show_all(int index);
	void show_one(std::string const &s, int add_first);
};

#endif