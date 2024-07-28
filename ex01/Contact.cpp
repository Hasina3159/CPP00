#include "Contact.hpp"

Contact::Contact() : m_first_name(""), m_last_name(""), m_nickname(""), m_phone_number(""), m_darkest_secret("")
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret) : m_first_name(first_name), m_last_name(last_name), m_nickname(nickname), m_phone_number(phone_number), m_darkest_secret(darkest_secret)
{
}

std::string Contact::get_fname()
{
    return m_first_name;
}
std::string Contact::get_lname()
{
    return m_last_name;
}
std::string Contact::get_nname()
{
    return m_nickname;
}
std::string Contact::get_phnumber()
{
    return m_phone_number;
}
std::string Contact::get_dsecret()
{
    return m_darkest_secret;
}