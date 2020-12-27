#include "Utils.hpp"

double normalCDF(double x) 
{
	return std::erfc(-x / std::sqrt(2)) / 2;
}
