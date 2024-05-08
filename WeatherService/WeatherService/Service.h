#pragma once
#include "Weather.h"

class Service 
{
	virtual Weather getWeather(std::string s) = 0;
	virtual ~Service();
};