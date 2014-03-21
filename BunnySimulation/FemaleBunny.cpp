#include "FemaleBunny.h"

bool FemaleBunny::CanBreedWith(const Bunny& other) const
{
	return this->age >= 2 &&
		other.GetGender() == BunnyGender::Male &&
		other.GetAge() >= 2;
}