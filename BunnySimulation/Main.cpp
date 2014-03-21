#include <iostream>
#include <string>

#include "BunnyColony.h"
#include "MaleBunny.h"

using namespace std;


int main()
{
	srand(2012321);
	BunnyColony colony;
	for (int i = 0; i < 4; i++)
	{
		colony.Step();
	}


	Bunny first("nikola", Color::Black);

	return 0;
}