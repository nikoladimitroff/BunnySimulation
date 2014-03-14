#include "MaleBunny.h"
#include "FemaleBunny.h"
#include "RadioactiveBunny.h"
#include <string>

using namespace std;


bool MaleBunny::CanBreedWith(Bunny& other)
{
	return this->age >= 2 &&
		other.gender == BunnyGender::Female &&
		other.age >= 2;
}