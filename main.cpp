#include "Parser.hpp"

int main(int argc, char **argv) {
	std::vector<Parser *> conf;
	if (argc != 2) {
		std::cerr << "wrong number of arguments!\n";
		return 1;
	}
	conf = get_conf(argv[1]);
	if (!conf[0])
		return 1;
}
