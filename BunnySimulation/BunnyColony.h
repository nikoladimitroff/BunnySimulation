#ifndef BUNNYCOLONY_H_GUARD
#define BUNNYCOLONY_H_GUARD

#include <vector>
#include "Bunny.h"

class BunnyColony
{
	std::vector<Bunny> bunnies;
public:
	void Step();

	BunnyColony()
	{
		Bunny first("nikola", Color::Black);
		Bunny second("e syrdit", Color::Red);

		this->bunnies.push_back(first);
		this->bunnies.push_back(second);
	}
};

#endif