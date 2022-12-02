#include "Parser.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Parser::Parser()
{
}

Parser::Parser( const Parser & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Parser::~Parser()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Parser &				Parser::operator=( Parser const & rhs )
{
	(void)rhs;
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Parser const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */