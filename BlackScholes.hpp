#ifndef BLACK_SCHOLES_HPP
#define BLACK_SCHOLES_HPP

#include <cmath>
#include "Asset.hpp"

/*
Holds the math formulas for Black Scholes
equation
*/


class Asset;





class BlackScholes {
private:
	Asset _asset;
	double _d1;
	double _d2;
	double _timeSqrt;

public:
	// Constructor
	BlackScholes(Asset asset);
	// Find d1 & d2
	double getD1();
	double getD2();
	double getTimeSqrt();

	// The equation that fits it all together
	double getEqn();
};



#endif // !BLACK_SCHOLES_HPP
