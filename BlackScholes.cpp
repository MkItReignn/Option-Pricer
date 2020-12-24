#include "BlackScholes.hpp"
#include <cmath>
#include <iostream>

double normalCDF(double x) // normal cumulative distribution function
{
	return std::erfc(-x / std::sqrt(2)) / 2;
}


BlackScholes::BlackScholes(Asset asset) : _asset(asset) 
{
	setTimeSqrt();
	setD1();
	//std::cout << "d1: " << _d1 << std::endl;
	setD2();
}

void BlackScholes::setD1() {
	_d1 = (log(_asset.getSpotPrice() / _asset.getStrikePrice()) + _asset.getInterestRate() * _asset.getTime())
		/ (_asset.getSigma() * _timeSqrt) + 0.5 * _asset.getSigma() * _timeSqrt;
	std::cout << "d1: " << _d1 << std::endl;
}

void BlackScholes::setD2() {
	_d2 = _d1 - (_asset.getSigma() * _timeSqrt);
	std::cout << "d2: " << _d2 << std::endl;

}

void BlackScholes::setTimeSqrt() {
	_timeSqrt = sqrt(_asset.getTime());
}

double BlackScholes::getCallPrice() {
	return _asset.getSpotPrice() * normalCDF(_d1) -
		_asset.getStrikePrice() * exp(-_asset.getInterestRate() * _asset.getTime()) *
		normalCDF(_d2);
}

double BlackScholes::getPutPrice() {
	return _asset.getStrikePrice() * exp(-_asset.getInterestRate() * _asset.getTime()) *
		normalCDF(-_d2) - _asset.getSpotPrice() * normalCDF(-_d1);
}