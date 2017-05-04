#include "Distance.h"



Distance::Distance()
{
}
void Distance::getDistance() // get lenght from user
{
	std::cout << "Enter Feet: "; std::cin >> feet;
	std::cout << "Enter Inches: "; std::cin >> inches;
}
void  Distance::showDistance()//display distance
{
	std::cout << feet << "\'- " << inches << "\" ";
}


Distance::~Distance()
{
}
