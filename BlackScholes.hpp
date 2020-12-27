#ifndef BLACK_SCHOLES_HPP
#define BLACK_SCHOLES_HPP

#include "Asset.hpp"

/*
Holds the math formulas for Black Scholes Model
*/

class Asset;

class BlackScholes {
private:
	Asset _asset;
	double _d1;
	double _d2;

public:
	// Constructor
	/*
	BlackScholes(Asset asset)
	Pass in asset profile to derive d1 & d2
	*/
	BlackScholes(Asset asset);

	// Setters
	/*
	setD1()
	Derives _d1 and couts its value
	*/
	void setD1();
	/*
	setD2()
	Derives _d1 and couts its value
	*/
	void setD2();


	// Getters
	double getCallPrice() const;
	double getPutPrice() const;
};

#endif // !BLACK_SCHOLES_HPP
