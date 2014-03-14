#ifndef RADIOACTIVEBUNNY_H_GUARD
#define RADIOACTIVEBUNNY_H_GUARD

#include "Bunny.h"
#include <vector>

class RadioactiveBunny : public Bunny
{
public:
	RadioactiveBunny(std::string& name, Bunny& mother) : Bunny(name, mother)
	{
		this->gender = BunnyGender::Radioactive;
	}

	RadioactiveBunny(Bunny& other)
	{
		this->age = other.age;
		this->name = other.name;
		this->color = other.color;
		this->gender = BunnyGender::Radioactive;
	}

	virtual bool CanBreedWith(Bunny& other);
	RadioactiveBunny* Infect(std::vector<Bunny*>& targets);
};

#endif