#include "Bachelier.hpp"
#include "Utils.hpp"
#include <iostream>



Bachelier::Bachelier(Asset asset) : _asset(asset) {
	setD1();
}

void Bachelier::setD1() {
	_d1 = (_asset.getSpotPrice() - _asset.getStrikePrice()) / 
	(_asset.getSigma() * _asset.getTimeSqrt());
	std::cout << "Bachelier d1: " << _d1 << std::endl;
}


double Bachelier::getCallPrice() const {
	return exp(-_asset.getInterestRate() * _asset.getTime()) * 
		((_asset.getSpotPrice() - _asset.getStrikePrice())
			* normalCDF(_d1) + _asset.getSigma() * _asset.getTimeSqrt() * normalCDF(_d1)) ;
}

double Bachelier::getPutPrice() const {
	return exp(-_asset.getInterestRate() * _asset.getTime()) *
		((_asset.getStrikePrice() - _asset.getSpotPrice())
			* normalCDF(-_d1) + _asset.getSigma() * _asset.getTimeSqrt() * normalCDF(_d1));
}