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
	if (argc != 2)
		return (0);
	ft_megaphone(argv[1]);
	std::cout << std::endl;
	return (0);
}