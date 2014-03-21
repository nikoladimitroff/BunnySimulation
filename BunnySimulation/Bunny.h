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

	Bunny(const Bunny& bunny)
	{

	}
		
	int age;
	Color color;
	std::string name;
	BunnyGender gender;
public:
	static std::vector<std::string> Names;

	Bunny(std::string name, Color color);

	Bunny(std::string name, const Bunny& mother) : Bunny(name, mother.color)
	{

	}

	bool CanBreedWith(const Bunny& other)
	{
		return true;
	}

	void Print() const;

	int GetAge() const
	{
		return this->age;
	}

	void GrowOlder()
	{
		this->age++;
	}

	Color GetColor() const
	{
		return this->color;
	}

	std::string GetName() const
	{
		return this->name;
	}

	BunnyGender GetGender() const
	{
		return this->gender;
	}

};



#endif