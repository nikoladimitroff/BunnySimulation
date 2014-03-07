#ifndef BUNNY_H_GUARD
#define BUNNY_H_GUARD

#include <iostream>
#include <string>

enum class Color
{
	White,
	Black,
	Gray,
	Pink,
	Red,
};

enum class BunnyGender
{
	Male,
	Female,
	Radioactive
};

class Bunny
{
public:
	int age;
	Color color;
	std::string name;
	BunnyGender gender;

	Bunny(std::string name, Color color);

	Bunny(std::string name, Bunny& mother) : Bunny(name, mother.color)
	{

	}

	void Print();
};

#endif