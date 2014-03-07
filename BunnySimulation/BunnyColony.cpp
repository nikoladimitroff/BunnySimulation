#include "BunnyColony.h"
#include <algorithm>

using namespace std;

vector<string> names = { "Stefan", "Jimena", "Goshko", "Esteban", "Peteva" };

bool shouldDie(Bunny bunny)
{
	return bunny.age >= 10;
}

void BunnyColony::Step()
{
	vector<Bunny> shouldLive;
	for each(Bunny bunny in this->bunnies)
	{

		bunny.age++;

		if (bunny.age >= 2)
		{
			for each(Bunny secondBunny in this->bunnies)
			{
				if (bunny.name == secondBunny.name)
					continue;
				if (secondBunny.age >= 2 && bunny.gender != secondBunny.gender)
				{
					string name = names.at(rand() % names.size());
					Bunny child(name, bunny);
					shouldLive.push_back(child);
					child.Print();
					cout << ".. Was born" << endl;
				}
			}
		}

		if (bunny.age < 10)
		{
			shouldLive.push_back(bunny);
		}
		else
		{
			bunny.Print();
			cout << "... Died" << endl;
		}
	}

	this->bunnies = shouldLive;


}