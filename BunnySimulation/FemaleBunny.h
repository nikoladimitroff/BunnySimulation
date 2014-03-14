#ifndef FEMALEBUNNY_H_GUARD
#define FEMALEBUNNY_H_GUARD

#include "Bunny.h"

using namespace std;

class FemaleBunny : public Bunny
{
public:
	FemaleBunny(string& name, Bunny& mother) : Bunny(name, mother)
	{
		this->gender = BunnyGender::Female;
	}


	virtual bool CanBreedWith(Bunny& other);
};

#endif