#include "Asset.hpp"

// Constructors
Asset::Asset() {
	_stockPrice = 0;
	_strikePrice = 0;
	_interestRate = 0;
	_time = 0;
	_sigma = 0;
}

Asset::Asset(double stockPrice, double strikePrice, double time,
	double sigma, double interestRate) :
	_stockPrice(stockPrice),
	_strikePrice(strikePrice),	
	_time(time/365),
	_sigma(sigma),
	_interestRate(interestRate)
{

}

// Getters
double Asset::getStockPrice() {
	return _stockPrice;
}

double Asset::getStrikePrice() {
	return _strikePrice;
}

double Asset::getInterestRate() {
	return _interestRate;
}

double Asset::getTime() {
	return _time;
}

double Asset::getSigma() {
	return _sigma;
}

// Setters
void Asset::setStockPrice(double stockPrice) {
	_stockPrice = stockPrice;
}

void Asset::setStrikePrice(double strikePrice) {
	_strikePrice = strikePrice;
}

void Asset::setInterestRate(double interestRate) {
	_interestRate = interestRate;
}

void Asset::setTime(double time) {
	_time = time;
}

void Asset::setSigma(double sigma) {
	_sigma = sigma;
}