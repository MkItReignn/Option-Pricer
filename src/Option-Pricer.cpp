#include <iostream>

#include "../Asset.hpp"
#include "../BlackScholes.hpp"

int main() {
	Asset asset(300, 250, 15, 0.15, 0.01);
	BlackScholes c(asset);

	std::cout << c.getEqn() << std::endl;


	return 0;
}