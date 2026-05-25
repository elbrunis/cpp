#include <string>
#include <iostream>
#include <fstream>

int ft_error(void)
{
	std::cerr << "Error" << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);

	std::string filename = argv[1];
	if (filename.empty())
		return (ft_error());

	std::string s1 = argv[2];
	if (s1.empty())
		return (ft_error());

	std::string s2 = argv[3];

	std::ifstream input(filename.c_str());
	if (!input.is_open())
		return (ft_error());

	std::string content;
	char c;
	while (input.get(c))
		content += c;

	input.close();

	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}

	std::ofstream output((filename + ".replace").c_str());
	if (!output.is_open())
		return (ft_error());

	output << content;
	output.close();

	return (0);
}