#include "Weather.h"

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
	: city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {}

void Weather::print() const
{
	std::cout << "Weather:"
		<< "\n\tcity: " << city
		<< "\n\lon: " << lon
		<< "\n\lat: " << lat
		<< "\n\temperature: " << temperature
		<< "\n\weather: " << weather
		<< "\n\windSpeed: " << windSpeed
		<< "\n\clouds: " << clouds;
}
