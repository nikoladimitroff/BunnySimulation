#include <iostream>
#include <string>

#include "BunnyColony.h"
#include "MaleBunny.h"
#include "Vector2.h"

using namespace std;


int main()
{
	//srand(2012321);
	//BunnyColony colony;
	//for (int i = 0; i < 4; i++)
	//{
	//	colony.Step();
	//}


	//Bunny first("nikola", Color::Black);

	Vector2 zero;
	//zero.Print();

	Vector2 unit(1, 1);
	//unit.Print();
	
	Vector2 sum = unit + zero;
	//sum.Print();



	Vector2 Ox(1, 0);
	Vector2 Oy(0, 1);

	/*Ox.Print();
	++Ox;
	Ox.Print();
	Ox++;
	Ox.Print();

	cout << 5;*/

	cin >> Ox;
	cout << endl;
	cout << Ox;

	Ox *= 5;
	cout << Ox;

	Ox = Ox + 5;
	// Ox = 5 + Ox;

	//cout << endl << Ox * unit << endl;


	return 0;
}