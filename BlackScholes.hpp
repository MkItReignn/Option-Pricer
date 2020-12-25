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
	BlackScholes(Asset asset);
	// Setters
	void setD1();
	void setD2();

	

	// Getters
	
	// Get Call Price
	double getCallPrice();
	// Get Put Price
	double getPutPrice();
};



#endif // !BLACK_SCHOLES_HPP
