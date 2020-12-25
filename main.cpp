#include <iostream>

#include "Asset.hpp"
#include "BlackScholes.hpp"
#include "Bachelier.hpp"

int main() {
	Asset asset(250, 250, 15, 0.15, 0.01);

	BlackScholes c(asset);

	std::cout << c.getCallPrice() << std::endl;
	std::cout << c.getPutPrice() << std::endl;

	//Asset ass(250, 250, 15, 0.15, 0.01);
	Bachelier b(asset);
	std::cout << b.getCallPrice() << std::endl;
	std::cout << b.getPutPrice() << std::endl;

	return 0;
}