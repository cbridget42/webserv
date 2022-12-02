#include "Parser.hpp"

std::vector<Parser *> get_conf(char *file) {
	std::ifstream in_file;
	std::vector<Parser *> res;
	std::string serv;
	in_file.open(file);
	if (!in_file.is_open()) {
		std::cerr << "Config wasn't opened!\n";
		res.push_back(0);
		return res;
	}
	serv = get_one_serv(in_file);
	if (serv.find("error") != std::string::npos && serv.find("error") == 0) {
		std::cerr << "Wrong config file!\n";
		res.push_back(0);
		return res;
	}
	
	return res;
}

std::string get_one_serv(std::ifstream &in_file) {
	std::string res;
	std::string tmp;
	std::getline(in_file, tmp);
	while (tmp[0] == '\n')
		std::getline(in_file, tmp);
	if (tmp.find("server") == std::string::npos || tmp.find('{') == std::string::npos || tmp.size() == 0)
		return "error";
	int par = 1;
	res += tmp;
	while (1) {
		std::getline(in_file, tmp);
		if (tmp.size() == 0 && par != 0)
			return "error";
		if (tmp.find('{') != std::string::npos)
			++par;
		else if (tmp.find('}') != std::string::npos)
			--par;
		res += tmp;
		if (!par)
			return res;
	}
}
