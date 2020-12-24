#include "Asset.hpp"

// Constructors

Asset::Asset() {
	_spotPrice = 0;
	_strikePrice = 0;
	_interestRate = 0;
	_time = 0;
	_sigma = 0;
}
/*
Asset(stockPrice, strikePrice, time, sigma, interestRate)
*/
Asset::Asset(double spotPrice, double strikePrice, double time,
	double sigma, double interestRate) :
	_spotPrice(spotPrice),
	_strikePrice(strikePrice),	
	_time(time/365),
	_sigma(sigma),
	_interestRate(interestRate)
{

}

// Getters
double Asset::getSpotPrice() {
	return _spotPrice;
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
void Asset::setSpotPrice(double spotPrice) {
	_spotPrice = spotPrice;
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