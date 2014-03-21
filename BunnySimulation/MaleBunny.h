#ifndef MALEBUNNY_H_GUARD
#define MALEBUNNY_H_GUARD

#include "Bunny.h"

using namespace std;

class MaleBunny : public Bunny
{
public:
	MaleBunny(string& name, const Bunny& mother) : Bunny(name, mother)
	{
		this->gender = BunnyGender::Male;
	}

	virtual bool CanBreedWith(const Bunny& other) const;
};

#endif
