#ifndef BACHELIER_HPP
#define BACHELIER_HPP

#include "Asset.hpp"

/*
Holds the math formulas for Bachelier Model
*/

class Asset;

class Bachelier {
private:
	Asset _asset;
	double _d1;

public:
	// Constructor
	Bachelier(Asset asset);

	// Setters
	void setD1();

	// Getters
	double getCallPrice();
	double getPutPrice();
};

#endif // !BACHELIER_HPP
