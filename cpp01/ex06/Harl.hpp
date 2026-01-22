#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class harl
{
	public:
		void complain( std::string level );
		harl(void){};

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

#endif