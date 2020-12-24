#ifndef ASSET_HPP
#define ASSET_HPP

/*
Holds all the data about the asset

*/
class Asset {
private:
	double _stockPrice;
	double _strikePrice;	
	double _time;
	double _sigma;
	double _interestRate;

public:
	// Constructor
	Asset();
	Asset(double stockPrice, double strikePrice, double time, 
		double sigma, double interestRate);
	// Destructor
	~Asset();


	// Getters
	double getStockPrice();
	double getStrikePrice();
	double getInterestRate();
	double getTime();
	double getSigma();
	// Setters
	void setStockPrice(double stockPrice);
	void setStrikePrice(double strikePrice);
	void setInterestRate(double interestRate);
	void setTime(double time);
	void setSigma(double sigma);
};


#endif // !ASSET_HPP
