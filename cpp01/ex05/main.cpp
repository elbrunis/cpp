#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	harl harl1;

	std::string test = argv[1];
	harl1.complain(test);
	return (0);
}