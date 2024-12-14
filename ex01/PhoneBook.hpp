#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	int 	m_index;
	Contact m_contacts[8];
	void	show_one(const std::string &s, const int &add_first) const;

  public:
	PhoneBook();
	//~PhoneBook();
	void	add(const std::string& first_name, const std::string &last_name,
		const std::string &nickname, const std::string &phone_number,
		const std::string &darkest_secret);
	void	Search(const int &index) const;
	int		get_max_index() const;
	void	show_all(const int &index) const;
	void	show_basic(const int &index) const;
};

#endif