#ifndef MENU_HPP
#define MENU_HPP

#include "Bachelier.hpp"
#include "BlackScholes.hpp"
#include <string>
#include <vector>
/* 
Contains methods so that there is console UI
*/


class Menu {
private:


public:
	// starts the menu
	void start();
	// Checks if the user is finished with the program
	bool isDone();
	// Check which model the user wants to use
	std::string modelType();
	// Grab the asset values needed to put into the models
	std::vector<double> getAssetValues(std::string type);
	// Output values
	void returnValues(std::vector<double> values, std::string type);
};



#endif 