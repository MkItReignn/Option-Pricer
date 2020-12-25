#ifndef ASSET_HPP
#define ASSET_HPP

/*
Holds all the data about the asset

*/
class Asset {
private:
	double _spotPrice;
	double _strikePrice;	
	double _time;
	double _sigma;
	double _interestRate;
	double _timeSqrt;

public:
	// Constructor
	Asset();
	Asset(double spotPrice, double strikePrice, double time, 
		double sigma, double interestRate);



	// Getters
	double getSpotPrice();
	double getStrikePrice();
	double getInterestRate();
	double getTime();
	double getSigma();
	double getTimeSqrt();
	// Setters
	void setSpotPrice(double spotPrice);
	void setStrikePrice(double strikePrice);
	void setInterestRate(double interestRate);
	void setTime(double time);
	void setSigma(double sigma);

};


#endif // !ASSET_HPP
