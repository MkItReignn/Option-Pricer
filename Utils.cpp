#include "Utils.hpp"

double normalCDF(double x) // normal cumulative distribution function
{
	return std::erfc(-x / std::sqrt(2)) / 2;
}
