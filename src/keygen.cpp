#include "cube.h"

#include <iostream>

void help()
{
	std::cout << "Usage: keygen <password>\n";
}

int main(int argc, char **argv)
{
	if(argc != 2 || !argv[1])
	{
		help();
		return EXIT_FAILURE;
	}
	vector<char> pubkey, privkey;
	genprivkey(argv[0], pubkey, privkey);
	std::cout << "public key: " << pubkey.getbuf() << "\n"
		<< "private key: " << privkey.getbuf() << "\n";
	return EXIT_SUCCESS;
}

