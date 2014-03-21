#ifndef BUNNYCOLONY_H_GUARD
#define BUNNYCOLONY_H_GUARD

#include <vector>
#include "Bunny.h"

class BunnyColony
{
	std::vector<Bunny*> bunnies;
public:
	void Step();

	BunnyColony()
	{
		Bunny* first = new Bunny("nikola", Color::Black);
		Bunny* second = new Bunny("e syrdit", Color::Red);

		this->bunnies.push_back(first);
		this->bunnies.push_back(second);
	}

	~BunnyColony()
	{
		for each (Bunny* bunny in this->bunnies)
		{
			delete bunny;
		}
	}
};

#endif