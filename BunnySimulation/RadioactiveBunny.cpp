#include "RadioactiveBunny.h"
#include <vector>

using namespace std;

bool RadioactiveBunny::CanBreedWith(const Bunny& other) const
{
	return false;
}

RadioactiveBunny* RadioactiveBunny::Infect(vector<Bunny*>& targets)
{
	int infectedIndex;
	Bunny* infected;
	do
	{
		infectedIndex = rand() % targets.size();
		infected = targets[infectedIndex];
	} while (infected->GetGender() == BunnyGender::Radioactive);


	targets[infectedIndex] = new RadioactiveBunny(*infected);

	//delete infected;

	return static_cast<RadioactiveBunny*>(targets[infectedIndex]);

}