#pragma once
#include"StruttureDiControllo.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;


class Static {

public:

	//Dichiarazione di una variabile statica
	static int count;

	//static const int pi = 314;

	Static() {
		count++;
		cout << "Creato istanza di Static, ora ce ne sono: " << count << endl;
	}

	~Static() {
		count--;
	}
	
	static int getCount() {
		return count;
	}

	/*public static Punto operator +(Punto a, Punto b)
    {
        return new Punto(a.X + b.X, a.Y + b.Y);
    }*/	

	static int SommaStatica(int a, int b)
	{
		return a + b;
	}


};
