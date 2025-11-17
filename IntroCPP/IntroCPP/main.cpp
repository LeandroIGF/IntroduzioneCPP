
#include <iostream>
#include <algorithm>

#include "Operatori.h"
#include "Puntatori.h"
#include "Static.h"

using namespace std;

/*

*/



int main()
{
	

	// Print Hello World to the console
	cout << "Hello, C++ World!" << endl;


	int numeri[] = { 10, 20, 30, 40, 50 };

	Weapon* primaryWeapon = new Weapon(30, "Laser");

	if (primaryWeapon != nullptr)
	{
		cout << primaryWeapon->getName() << endl;
	}
	
	if (!primaryWeapon)
	{
		cout << "Null pointer" << endl;
	}

	//if (IsValid(primaryWeapon))
	//{

	//}

	delete primaryWeapon;

	primaryWeapon = nullptr;

	primaryWeapon = new Weapon(50, "Rifle");
	
	cout << primaryWeapon->getName() << endl;

	delete primaryWeapon;

	primaryWeapon = nullptr;

	cin.get();

	Esercizio7* esercizio7 = new Esercizio7();

	esercizio7->ForEach();

	delete esercizio7;
	esercizio7 = nullptr;

	// STATIC

	Static* s1 = new Static();
	Static* s2 = new Static();
	Static* s3 = new Static();

	delete s1;
	s1 = nullptr;

	cout << Static::count << endl;

	delete s2;
	s2 = nullptr;

	cout << Static::getCount() << endl;

	return 0;
}