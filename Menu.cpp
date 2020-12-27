#include "Menu.hpp"
#include <iostream>

void Menu::start() {
	do {
		std::string type = modelType();
		std::vector<double> values = getAssetValues(type);

		returnValues(values, type);
		

	} while (!isDone());
}

void Menu::returnValues(std::vector<double> values, std::string type) {
	Asset a(values[0], values[1], values[2],
		values[3], values[4]);;

	if (type == "Bach") {
		Bachelier b(a);
		std::cout << "The call price of Bachelier model: " << b.getCallPrice() << std::endl;
		std::cout << "The put price of Bachelier model: " << b.getPutPrice() << std::endl;
	}
	else if (type == "Black") {
		BlackScholes b(a);
		std::cout << "The call price of Black Scholes model: " << b.getCallPrice() << std::endl;
		std::cout << "The put price of Black Scholes model: " << b.getPutPrice() << std::endl;
	}
}

bool Menu::isDone() {
	std::cout << "Please write 'quit' to exit the program: ";

	std::string response;
	std::getline(std::cin, response);

	return response == "quit";
}

std::string Menu::modelType() {
	std::string response;

	do {
		std::cout << "Which model would you like to use Bachelier[Bach] or Black Scholes[Black]: ";
		response = "";
		std::getline(std::cin, response);
	} while (response != "Bach" && response != "Black");
	
	return response;
}

std::vector<double> Menu::getAssetValues(std::string type) {
	
	std::vector<double> values (5);
	
	int i = 0;
	while (i < 5) {
		switch (i) {
		case 0:
			std::cout << "Enter the spot price of the asset: ";
			break;
		case 1:
			std::cout << "Enter the strike price: ";
			break;
		case 2:
			std::cout << "Enter the time left til expiration (days): ";
			break;
			
		case 3:
			std::cout << "Enter the interest rate in %: ";
			break;
		case 4:
			std::cout << "Enter the implied volatility in %: ";
			break;
		}

		std::cin >> values[i++];
	}
	std::getline(std::cin, type);

	return values;
}
