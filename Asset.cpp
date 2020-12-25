#include "Asset.hpp"
#include <cmath>
// Constructors

Asset::Asset() {
	_spotPrice = 0;
	_strikePrice = 0;
	_interestRate = 0;
	_time = 0;
	_sigma = 0;
	_timeSqrt = 0;

}
/*
Asset(stockPrice, strikePrice, time, sigma, interestRate)
*/
Asset::Asset(double spotPrice, double strikePrice, double time,
	double interestRate, double sigma) : // check here later
	_spotPrice(spotPrice),
	_strikePrice(strikePrice),	
	_time(time/365),
	_interestRate(interestRate/100),
	_sigma(sigma/100),	
	_timeSqrt(sqrt(time/365))
{

}

// Getters
double Asset::getSpotPrice() const {
	return _spotPrice;
}

double Asset::getStrikePrice() const {
	return _strikePrice;
}

double Asset::getInterestRate() const {
	return _interestRate;
}

double Asset::getTime() const {
	return _time;
}

double Asset::getSigma() const {
	return _sigma;
}

double Asset::getTimeSqrt() const {
	return _timeSqrt;
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
