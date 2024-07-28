#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook ph;

    ph.add("1TODISOA", "Ny Hasina Nomenjanahary", "Petera", "034 93 676 03", "I'm God!");
    ph.add("2TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.add("3TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.add("4TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.add("5TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.add("6TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.add("7TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.add("8TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.add("9TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.add("10TIRISOA", "Mamamody", "Aleloia!", "034 93 676 03", "I'm a fucking God!");
    ph.Search(0);
    return (0);
}