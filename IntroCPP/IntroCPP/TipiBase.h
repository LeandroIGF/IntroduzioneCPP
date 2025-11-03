#pragma once

#include <string>
#include <iostream>
#include "IntroCPP.h"
using namespace std;
// Definizione di una struct per rappresentare uno studente

struct Studente {
	int anni;
	float mediaVoti;
	string nome;

	// Default Constructor
	Studente() : anni(0), mediaVoti(.0f), nome("")
	{
		cout << "STUDENTE INIZIALIZZATO " << endl;
	}

	// Custom Constructor
	Studente(const string& newNome, int newAnni, float newMediaVoti)
	{
		anni = newAnni;
		nome = newNome;
		mediaVoti = newMediaVoti;
	}

};

class TipiBase {

	// Base type c++

	// Integer
	int numeroIntero = -3; // numero intero con segno
	unsigned int numeroInteroPositivo = 5; // numero intero senza segno

	// Floating point, con precisione singola
	float numeroDecimale = 3.14f; // numero decimale a precisione singola
	float numeroDecimalePiccolo = .2f; // numero decimale più piccolo di 1

	// Floating point, con precisione doppia
	double numeroDecimaleDoppiaPrecisione = 3.141592653589793; // numero decimale a precisione doppia

	// Carattere singolo
	char carattere = 'A'; // singolo carattere racchiuso tra apici singoli

	// Booleano
	bool valoreBooleano = true; // valore booleano, può essere true o false
	bool altroValoreBooleano = false;

	// Stampa i valori delle variabili
	void stampaValoriVariabili();
	

	// tipi composti: array, struct, class

	// Array

	int arrayDiInteri[5] = { 1, 2, 3, 4, 5 }; // array di 5 interi
	char arrayDiCharaceter[5] = { 'H', 'E', 'L', 'L', 'O' };
	float arrayDiFloat[5] = { 3.0f, 2.5f, 1.5f, .6f, .4f };
	bool arrayDiBool[5] = { true, true, false, true, false };

	// String
	string testo = "Esempio di stringa in C++";
	string arrayDiStringhe[4] = { "Ciao", "Come va", "Leo", "Matteo" };

	//Struct Studente

	Studente randomStudente;

	

	


};
