#include "MaleBunny.h"
#include "FemaleBunny.h"
#include "RadioactiveBunny.h"
#include <string>

using namespace std;


bool MaleBunny::CanBreedWith(const Bunny& other) const
{
	return this->age >= 2 &&
		other.GetGender() == BunnyGender::Female &&
		other.GetAge() >= 2;
}