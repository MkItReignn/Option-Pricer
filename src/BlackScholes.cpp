#include "../header/BlackScholes.hpp"
#include <cmath>
#include "../header/Utils.hpp"
#include <iostream>

BlackScholes::BlackScholes(Asset asset) : _asset(asset) 
{
	setD1();
	setD2();
}

void BlackScholes::setD1() {
	_d1 = (log(_asset.getSpotPrice() / _asset.getStrikePrice()) + _asset.getInterestRate() * _asset.getTime())
		/ (_asset.getSigma() * _asset.getTimeSqrt()) + 0.5 * _asset.getSigma() * _asset.getTimeSqrt();
	std::cout << "BlackScholes d1: " << _d1 << std::endl;
}

void BlackScholes::setD2() {
	_d2 = _d1 - (_asset.getSigma() * _asset.getTimeSqrt());
	std::cout << "BlackScholes d2: " << _d2 << std::endl;

}

double BlackScholes::getCallPrice() const {
	return _asset.getSpotPrice() * normalCDF(_d1) -
		_asset.getStrikePrice() * exp(-_asset.getInterestRate() * _asset.getTime()) *
		normalCDF(_d2);
}

double BlackScholes::getPutPrice() const {
	return _asset.getStrikePrice() * exp(-_asset.getInterestRate() * _asset.getTime()) *
		normalCDF(-_d2) - _asset.getSpotPrice() * normalCDF(-_d1);
}