// LittleRobot.cpp: Definiert den Einstiegspunkt für die Anwendung.
//

#include "LittleRobot.h"

int main()
{
	SuperSonicRadar* test = new SuperSonicRadar();

	std::cout << test->GetDistancemap() << std::endl;

	std::cout << "Hello CMake." << std::endl;
	return 0;
}
