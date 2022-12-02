#ifndef PARSER_HPP
# define PARSER_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <vector>
# include <map>

class Location;

class Parser
{

	public:

		Parser();
		Parser( Parser const & src );
		~Parser();

		Parser &		operator=( Parser const & rhs );

	private:

		std::map<std::string, std::string> _conf;
		
};

std::vector<Parser *> get_conf(char *file);
std::string get_one_serv(std::ifstream &in_file);

std::ostream &			operator<<( std::ostream & o, Parser const & i );

#endif /* ********************************************************** PARSER_H */