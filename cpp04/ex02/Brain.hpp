//Brain
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& other);

		~Brain();

		Brain& operator=(const Brain& other);

		void			setIdea(int id, std::string idea);
		const std::string&	getIdea(int id);

	private:

		std::string ideas[100];
};


#endif