#include "Weather.h"
#include "JsonService.h"
#include "Service.h"
#include <locale>
#include <iostream>

int main()
{
	std::locale::global(std::locale{ ".UTF-8" });
	std::cout.imbue(std::locale(""));

	JsonService js;
	Weather w = js.getWeather("../../weather.json");
	w.print();
}

