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
    Contact(const std::string &first_name, const std::string &last_name, const std::string &nickname, const std::string &phone_number, const std::string &darkest_secret);
    std::string get_fname() const;
    std::string get_lname() const;
    std::string get_nname() const;
    std::string get_phnumber() const;
    std::string get_dsecret() const;
};

#endif