#include "BlackScholes.hpp"

double normalCDF(double x) // normal cumulative distribution function
{
	return std::erfc(-x / std::sqrt(2)) / 2;
}


BlackScholes::BlackScholes(Asset asset) : _asset(asset) 
{
	_timeSqrt = getTimeSqrt();
	_d1 = getD1();
	_d2 = getD2();
}

double BlackScholes::getD1() {
	double timeSqrt = sqrt(_asset.getTime());
	double d1 = (log(_asset.getStockPrice() / _asset.getStrikePrice() + _asset.getInterestRate() * _asset.getTime()))
		/ (_asset.getSigma() * timeSqrt) + 0.5 * _asset.getSigma() * timeSqrt;

	return d1;
}

double BlackScholes::getD2() {	
	double timeSqrt = sqrt(_asset.getTime());
	double d2 = _d1 - (_asset.getSigma() * _timeSqrt);


	return d2;
}

double BlackScholes::getTimeSqrt() {
	return sqrt(_asset.getTime());
}

double BlackScholes::getEqn() {
	return _asset.getSigma() * normalCDF(_d1) -
		_asset.getStrikePrice() * exp(-_asset.getInterestRate() * _asset.getTime()) *
		normalCDF(_d2);
}