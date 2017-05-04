#pragma once
#include <iostream>
class Distance
{
private:
	int feet;
	double inches;
public:
	Distance();
	void getDistance(); // get lenght from user
	void showDistance(); //display distance
	
	~Distance();
};

