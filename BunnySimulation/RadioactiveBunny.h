#ifndef RADIOACTIVEBUNNY_H_GUARD
#define RADIOACTIVEBUNNY_H_GUARD

#include "Bunny.h"
#include <vector>

class RadioactiveBunny : public Bunny
{
public:
	RadioactiveBunny(std::string& name, const Bunny& mother) : Bunny(name, mother)
	{
		this->gender = BunnyGender::Radioactive;
	}

	RadioactiveBunny(const Bunny& other)
	{
		this->age = other.GetAge();
		this->name = other.GetName();
		this->color = other.GetColor();
		this->gender = BunnyGender::Radioactive;
	}

	virtual bool CanBreedWith(const Bunny& other) const;
	RadioactiveBunny* Infect(std::vector<Bunny*>& targets);
};

#endif