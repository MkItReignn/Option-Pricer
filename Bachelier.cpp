#include "Bachelier.hpp"
#include <cmath>
#include <iostream>

double normalCDF(double x) // normal cumulative distribution function
{
	return std::erfc(-x / std::sqrt(2)) / 2;
}

Bachelier::Bachelier(Asset asset) : _asset(asset) {
	setD1();
	std::cout << "d1: " << _d1 << std::endl;
}

void Bachelier::setD1() {
	_d1 = (_asset.getSpotPrice() - _asset.getStrikePrice()) / 
	(_asset.getSigma() * _asset.getTimeSqrt());
}


double Bachelier::getCallPrice() {
	return exp(-_asset.getInterestRate() * _asset.getTime()) * 
		((_asset.getSpotPrice() - _asset.getStrikePrice())
			* normalCDF(_d1) + _asset.getSigma() * _asset.getTimeSqrt() * normalCDF(_d1)) ;
}

double Bachelier::getPutPrice() {
	return exp(-_asset.getInterestRate() * _asset.getTime()) *
		((_asset.getStrikePrice() - _asset.getSpotPrice())
			* normalCDF(-_d1) + _asset.getSigma() * _asset.getTimeSqrt() * normalCDF(_d1));
}