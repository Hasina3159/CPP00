#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
class Contact
{
private:
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_phone_number;
    std::string m_darkest_secret;
public:
    Contact();
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
    std::string get_fname();
    std::string get_lname();
    std::string get_nname();
    std::string get_phnumber();
    std::string get_dsecret();
};

#endif