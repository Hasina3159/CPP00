/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntodisoa <ntodisoa@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 11:29:28 by ntodisoa          #+#    #+#             */
/*   Updated: 2024/12/29 11:30:05 by ntodisoa         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Contact.hpp"

Contact::Contact() : m_first_name(""), m_last_name(""), m_nickname(""), m_phone_number(""), m_darkest_secret("")
{
}

Contact::Contact(const std::string &first_name, const std::string &last_name, const std::string &nickname, const std::string &phone_number, const std::string &darkest_secret) : m_first_name(first_name), m_last_name(last_name), m_nickname(nickname), m_phone_number(phone_number), m_darkest_secret(darkest_secret)
{
}

std::string Contact::get_fname() const
{
    return m_first_name;
}
std::string Contact::get_lname() const
{
    return m_last_name;
}
std::string Contact::get_nname() const
{
    return m_nickname;
}
std::string Contact::get_phnumber() const
{
    return m_phone_number;
}
std::string Contact::get_dsecret() const
{
    return m_darkest_secret;
}