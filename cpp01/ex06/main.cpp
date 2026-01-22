#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	harl harl1;
	std::string test = argv[1];
	std::string level[] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (level[i] == test)
			break;
		i++;
	}

	switch (i)
	{
	case 0:
		harl1.complain("DEBUG");
		// fallthrough
	case 1:
		harl1.complain("INFO");
		// fallthrough
	case 2:
		harl1.complain("WARNING");
		// fallthrough
	case 3:
		harl1.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return (0);
}