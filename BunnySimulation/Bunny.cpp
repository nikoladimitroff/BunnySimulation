#include <iostream>
#include <string>

#include "Bunny.h"

using namespace std;

Bunny::Bunny(string name, Color color)
{
	this->age = 0;
	this->color = color;
	int random = rand() % 100;
	if (random < 2)
	{
		this->gender = BunnyGender::Radioactive;
	}
	else
	{
		this->gender = static_cast<BunnyGender>(random % 2);
	}

	this->name = name;
}

void Bunny::Print()
{
	std::cout << "Name: " << this->name
		<< ", Age: " << this->age
		<< ", Color: " << static_cast<int>(this->color)
		<< ", Gender: " << static_cast<int>(this->gender)
		<< std::endl;
}