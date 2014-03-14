#include "FemaleBunny.h"

bool FemaleBunny::CanBreedWith(Bunny& other)
{
	return this->age >= 2 &&
		other.gender == BunnyGender::Male &&
		other.age >= 2;
}