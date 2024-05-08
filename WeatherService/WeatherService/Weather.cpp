#include "Weather.h"

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
	: city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {}

void Weather::print() const
{
	std::cout << "Weather:"
		<< "\n\tcity: \t\t" << city
		<< "\n\tlon: \t\t" << lon
		<< "\n\tlat: \t\t" << lat
		<< "\n\temperature: \t" << temperature
		<< "\n\tweather: \t" << weather
		<< "\n\twindSpeed: \t" << windSpeed
		<< "\n\tclouds: \t" << clouds;
}
