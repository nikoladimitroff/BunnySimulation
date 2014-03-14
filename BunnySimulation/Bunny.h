#ifndef BUNNY_H_GUARD
#define BUNNY_H_GUARD

#include <iostream>
#include <string>
#include <vector>

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
protected:
	Bunny()
	{}
public:
	static std::vector<std::string> Names;
	int age;
	Color color;
	std::string name;
	BunnyGender gender;

	Bunny(std::string name, Color color);

	Bunny(std::string name, Bunny& mother) : Bunny(name, mother.color)
	{

	}

	bool CanBreedWith(Bunny& other)
	{
		return true;
	}

	void Print();
};



#endif