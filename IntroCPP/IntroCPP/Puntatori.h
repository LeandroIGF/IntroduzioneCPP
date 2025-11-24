#pragma once
#include"StruttureDiControllo.h"
#include "Interfaccia.h"
#include <string>
#include <vector>

using namespace std;

class Weapon : public IInterfaccia
{
public:

	Weapon();

	Weapon(int InitDamage, string InitName) {

		this->weaponDamage = InitDamage;
		this->name = InitName;

	};

	~Weapon();

	int value = 42;

	int* intPointer = nullptr;

	char* charPointer = nullptr;

	Calcolatrice* calcolatricePointer = nullptr;

	void initPointers();

	int arrayInt[5] = { 1,2,3,4,5 };

	int Damage(int danno, int multiplier, int *totaldamage);

	int weaponDamage;

	string name = " ";

	int DamageRef(int danno, int multiplier, int& totaldamage);

	void setCalcolatrice(Calcolatrice* calcolatrice);

	void esempioPuntatori();

	string getName() { return name; }

	// implementazione dell'interfaccia
	void interact() override;

	void displayMessage() override;

private:

	int HP = 100;

protected:

	

};

class Esercizio7 {
	private:
		vector<string> colori = { "rosso", "verde", "blu", "giallo", "viola" };

	public:
		void ForEach();
};


class WeaponTrace : public Weapon//, public IInterfaccia
{


};