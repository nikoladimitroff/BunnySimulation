#include "BunnyColony.h"
#include "MaleBunny.h"
#include "FemaleBunny.h"
#include "RadioactiveBunny.h"

using namespace std;

bool shouldDie(Bunny bunny)
{
	return bunny.age >= 10;
}

Bunny* GiveBirthToBunny(Bunny& mother)
{
	std::string name = Bunny::Names.at(rand() % Bunny::Names.size());

	int random = rand() % 100;
	if (random < 5)
	{
		return new RadioactiveBunny(name, mother);
	}
	else if (random < 51)
	{
		return new MaleBunny(name, mother);
	}
	else {
		return new FemaleBunny(name, mother);
	}

}

void BunnyColony::Step()
{
	vector<Bunny*> shouldLive;
	typedef vector<Bunny*>::const_iterator iterator;

	for (iterator i = this->bunnies.cbegin(); i != this->bunnies.cend(); i++)
	{
		Bunny* firstBunny = *i;

		for (iterator j = i + 1; j != this->bunnies.cend(); j++)
		{
			Bunny* secondBunny = *j;
			if (firstBunny->CanBreedWith(*secondBunny))
			{
				Bunny* child = GiveBirthToBunny(*firstBunny);
				shouldLive.push_back(child);
				child->Print();
				cout << ".. Was born" << endl;
			}
		}
		firstBunny->age++;
		if (firstBunny->age < 10)
		{
			shouldLive.push_back(firstBunny);
		}
		else
		{
			firstBunny->Print();
			cout << "... Died" << endl;
		}
	}

	for (iterator i = shouldLive.cbegin(); i != shouldLive.cend(); i++)
	{
		Bunny* bunny = *i;
		if (bunny->gender == BunnyGender::Radioactive)
		{
			RadioactiveBunny* radioactive = static_cast<RadioactiveBunny*>(bunny);
			RadioactiveBunny* infected = radioactive->Infect(shouldLive);

			infected->Print();
			cout << "... was infected" << endl;
		}
	}

	this->bunnies = shouldLive;
}