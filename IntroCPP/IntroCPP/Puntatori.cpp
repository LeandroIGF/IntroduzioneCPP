#include "Puntatori.h"
#include <iostream>
#include <iterator> // for std::size

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

void Weapon::initPointers()
{
	intPointer = &HP;

	std::cout << "HP: " << *intPointer << std::endl;

	*intPointer = 150;

	std::cout << "HP after modification: " << HP << std::endl;

	intPointer = arrayInt;

	 // Move the pointer to the third element of the array 2*sizeof(int)

	for (size_t i = 0; i < std::size(arrayInt) ; i++)
	{
		std::cout << "Array element " << i << ": " << *(intPointer + i) << std::endl;
	}

}

int Weapon::Damage(int danno, int multiplier, int* totaldamage)
{
	if(totaldamage == nullptr)
		return -1;

	return *totaldamage = danno * multiplier;
}

int Weapon::DamageRef(int danno, int multiplier, int& totaldamage)
{
	return totaldamage = danno * multiplier;	
}

void Weapon::setCalcolatrice(Calcolatrice* calcolatrice)
{
	this->calcolatricePointer = calcolatrice;
}

void Weapon::esempioPuntatori()
{
	Weapon* spada = new Weapon();

	spada->initPointers();

	delete spada;
	spada = nullptr;

	if (spada == nullptr)
	{
		std::cout << "Puntatore spada è nullptr dopo delete." << std::endl;
	}
	else
	{
		spada->initPointers();
	}
}

void Esercizio7::ForEach()
{
	return;
}
