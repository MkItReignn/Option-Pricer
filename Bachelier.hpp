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
	/*
	Bachelier(Asset asset)
	Pass in asset profile to derive d1
	*/
	Bachelier(Asset asset);

	// Setters
	/*
	setD1()
	Derives _d1 and couts its value
	*/
	void setD1();

	// Getters
	double getCallPrice() const;
	double getPutPrice() const;
};

#endif // !BACHELIER_HPP
