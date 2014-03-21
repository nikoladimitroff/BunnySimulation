#include <iostream>
#include <string>

#include "Bunny.h"

using namespace std;

Bunny::Bunny(string name, Color color)
{
	this->age = 0;
	this->color = color;

	this->name = name;
}

void Bunny::Print() const
{
	std::cout << "Name: " << this->name
		<< ", Age: " << this->age
		<< ", Color: " << static_cast<int>(this->color)
		<< ", Gender: " << static_cast<int>(this->gender)
		<< std::endl;
}

vector<string> Bunny::Names = { "Stefan", "Jimena", "Goshko", "Esteban", "Peteva" };
