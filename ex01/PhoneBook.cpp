#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	int i;

	i = 0;
	while (i < 8)
	{
		m_contacts[i] = Contact();
		i++;
	}
	m_index = 0;
}

void PhoneBook::add(const std::string& first_name, const std::string &last_name, const std::string &nickname, const std::string &phone_number, const std::string &darkest_secret)
{
	if (first_name == "" || last_name == "" || nickname == "" || phone_number == "" || darkest_secret == "")
	{
		perror("Phonebook::add -> ValueError!\n");
		return ;
	}
	m_index = m_index % 8;
	m_contacts[m_index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	m_index++;
}

void PhoneBook::show_one(const std::string  &s, const int &add_first) const
{
	size_t	i{0};

	if (add_first)
		std::cout << "|" << std::flush;
	while (s.size() < 10 && i < (10 - s.size()))
	{
		std::cout << " " << std::flush;
		i++;
	}
	i = 0;
	while (s[i] && i < 9)
	{
		std::cout << s[i] << std::flush;
		i++;
	}
	if (s.length() > 10)
		std::cout << "." << std::flush;
	else if (s[i] && i == 9)
		std::cout << s[i] << std::flush;
	std::cout << "|" << std::flush;
	return ;
}

void PhoneBook::show_all(const int &index) const
{
	std::string	i("0");
	i[0] = index + '0';
	show_one(i, 1);
	show_one(m_contacts[index].get_fname(), 0);
	show_one(m_contacts[index].get_lname(), 0);
	show_one(m_contacts[index].get_nname(), 0);
	show_one(m_contacts[index].get_phnumber(), 0);
	show_one(m_contacts[index].get_dsecret(), 0);
	return ;
}

void PhoneBook::show_basic(const int &index) const
{
	std::string	i("0");
	i[0] = index + '0';
	show_one(i, 1);
	show_one(m_contacts[index].get_fname(), 0);
	show_one(m_contacts[index].get_lname(), 0);
	show_one(m_contacts[index].get_nname(), 0);
	return ;
}

void PhoneBook::Search(const int &index) const
{
	if (index >= 0 && index <= m_index)
		show_all(index);
	std::cout << std::endl;
}

int		PhoneBook::get_max_index() const
{
	return (m_index);
}
