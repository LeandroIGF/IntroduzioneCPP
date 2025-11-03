#include "TipiBase.h"

void TipiBase::stampaValoriVariabili()
{

	cout << "--- ESEMPI DI VARIABILI: ---" << endl;


	cout << "Intero: (int)" << numeroIntero << endl;
	cout << "Intero positivo: (unsigned int)" << numeroInteroPositivo << endl;
	cout << "Decimale (float): " << numeroDecimale << endl;
	cout << "Decimale piccolo (float): " << numeroDecimalePiccolo << endl;
	cout << "Decimale doppia precisione (double): " << numeroDecimaleDoppiaPrecisione << endl;
	cout << "Carattere (char): " << carattere << endl;
	cout << "Booleano (bool): " << valoreBooleano << endl;
	cout << "Altro Booleano (bool): " << altroValoreBooleano << endl;

	cout << "---------------------------" << endl;

	cout << "--- DIMENSIONE IN BYTE DEI TIPI: ---" << endl;

	cout << "Dimensione :" << sizeof(int) << " byte per il tipo int" << endl;
	cout << "Dimensione :" << sizeof(unsigned int) << " byte per il tipo unsigned int" << endl;
	cout << "Dimensione :" << sizeof(float) << " byte per il tipo float" << endl;
	cout << "Dimensione :" << sizeof(double) << " byte per il tipo double" << endl;
	cout << "Dimensione :" << sizeof(char) << " byte per il tipo char" << endl;
	cout << "Dimensione :" << sizeof(bool) << " byte per il tipo bool" << endl;


	cout << "---------------------------" << endl;

	//Struct Studente

	Studente randomCustomStudente(testo, 21, .4);

	randomStudente.nome = "Random";
	randomStudente.anni = 20;
	randomStudente.mediaVoti = 8.4f;

	// Class

	Rettangolo rettangolo(5, 10);

	int area = rettangolo.calcoloArea();
}
