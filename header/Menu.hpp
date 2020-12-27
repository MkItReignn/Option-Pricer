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
	/*
	start()
	Starts the menu for the user
	*/
	void start();

	/*
	isDone()
	Checks if the user is finished with the program
	*/
	bool isDone();

	/*
	modelType()
	Prompts user about what model they would like to use
	*/
	std::string modelType();

	/*
	getAssetValues(string type)
	Prompts user for input to create asset profile
	*/
	std::vector<double> getAssetValues(std::string type);

	/*
	returnValues(vector<double> values, string type)
	Informs user about the information of call and put price
	derived from asset profile, in the console
	*/
	void returnValues(std::vector<double> values, std::string type);
};

#endif 